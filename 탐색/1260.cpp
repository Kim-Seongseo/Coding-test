#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
vector<int> arr[100000];
int visit[100000];

void dfs(int v){
    visit[v] = 1;
    printf("%d ", v);
    for(int i=0; i<arr[v].size(); i++){
        if(visit[arr[v][i]] == 0){
            dfs(arr[v][i]);
        }
    }
}

void bfs(int v){
    queue<int> q;
    q.push(v);
    visit[v] = 1;
    printf("%d ", v);
    while(q.empty() == false){
        int t = q.front();
        q.pop();
        for(int i=0; i<arr[t].size(); i++){
            if(visit[arr[t][i]] == 0){
                printf("%d ", arr[t][i]);
                q.push(arr[t][i]);
                visit[arr[t][i]] = 1;
            }
        }
    }
}

int main(){
    int N, M;
    int start;
    scanf("%d %d %d", &N, &M, &start);
    
    for(int i=0; i<M; i++){
        int s, e;
        scanf("%d %d", &s, &e);
        arr[s].push_back(e);
        arr[e].push_back(s);
    }
    
    //벡터 정렬(작은 숫자부터 탐색)
    for(int i=1; i<=N; i++){
        sort(arr[i].begin(), arr[i].end());
    }

    dfs(start);

    for(int i=1; i<=N; i++){
        visit[i] = 0;
    }
    printf("\n");

    bfs(start);

    return 0;
}