#include <stdio.h>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;

vector<int> arr[200000];
int visit[200000];
int result[200000];
stack<int> path;
int N, M, start, dest;

int dfs(int v){
    if(v == dest){
        path.push(v);
        return 1;
    }

    visit[v] = 1;
    for(int i=0; i<arr[v].size(); i++){
        if(visit[arr[v][i]] == 0){
            result[arr[v][i]] = v;
            dfs(arr[v][i]);
        }
    }
    return 0;
}

int main(){
    scanf("%d %d %d %d", &N, &M, &start, &dest);
    for(int i=0; i<M-1; i++){
        int s, e;
        scanf("%d %d", &s, &e);
        arr[s].push_back(e);
        arr[e].push_back(s);
    }
    for(int i=1; i<=N; i++){
        sort(arr[i].begin(), arr[i].end());
    }
    dfs(start);
    while(path.empty() == false){
        printf("%d\n", path.top());
        path.pop();
    }
    
    return 0;
}