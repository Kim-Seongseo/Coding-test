#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> arr[100];
int visit[100];

void dfs(int v){
    visit[v] = 1;
    printf("%d ", v);
    for(int i=0; i<arr[v].size(); i++){
        if(visit[arr[v][i]] == 0){
            dfs(arr[v][i]);
        }
    }
}

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    for(int i=0; i<M; i++){
        int s, e;
        scanf("%d %d", &s, &e);
        arr[s].push_back(e);
        arr[e].push_back(s);
    }
    
    //벡터 정렬(작은 숫자부터 탐색)
    for(int i=1; i<=7; i++){
        sort(arr[i].begin(), arr[i].end());
    }

    for(int i=1; i<=7; i++){
        for(int j=1; j<=7; j++){
            visit[j] = 0;
        }
        dfs(i);
        printf("\n");
    }
}