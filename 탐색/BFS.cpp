#include <iostream>
#include <queue>
using namespace std;
/*
방문 배열, 큐 필요
시작점 방문
시작점 Q push
while - Q가 빌때까지
next가 방문하지 않은 상태이면 Q에 넣고 방문
*/

int arr[10][10];
int visited[10];

void bfs(int v){
    queue<int> q;
    q.push(v);
    visited[v] = 1;
    printf("%d ", v);
    while(q.empty() == false){
        int t = q.front();
        q.pop();
        for(int i=1; i<=7; i++){
            if(arr[t][i]==1){
                if(visited[i]==0){
                    visited[i]=1;
                    q.push(i);
                    printf("%d ", i);
                }
            }
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int a, b;
        scanf("%d%d", &a, &b);
        arr[a][b] = 1;
        arr[b][a] = 1;
    }

    int v;
    scanf("%d", &v);
    bfs(v);
    
    return 0;
}