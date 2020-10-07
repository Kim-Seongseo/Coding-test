#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> arr[200000];
int visit[200000];
int result[200000];

void dfs(int v){
    visit[v] = 1;
    for(int i=0; i<arr[v].size(); i++){
        if(visit[arr[v][i]] == 0){
            result[arr[v][i]] = v;
            dfs(arr[v][i]);
        }
    }
}

int main(){
    int M;
    scanf("%d", &M);
    for(int i=0; i<M-1; i++){
        int s, e;
        scanf("%d %d", &s, &e);
        arr[s].push_back(e);
        arr[e].push_back(s);
    }
    dfs(1);
    for(int i=2; i<=M; i++){
        printf("%d\n", result[i]);
    }
    
    return 0;
}