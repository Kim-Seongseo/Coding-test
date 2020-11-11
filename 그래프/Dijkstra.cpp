#include <stdio.h>
#include <queue>
#include <vector>
#define MAX 1000000
#define INF 1e9
using namespace std;

vector<pair<int,int>> graph[MAX];
int table[MAX];

void dijkstra(int start){
    priority_queue<pair<int,int>> q;
    q.push(make_pair(0,start));
    table[start] = 0;
    while(!q.empty()){
        int dist = -q.top().first;
        int now = q.top().second;
        q.pop();
        //이미 처리한 vertex라면 무시
        if(table[now] < dist) continue;
        //now와 연결된 다른 vertex들 확인
        for(int i=0; i<graph[now].size(); i++){
            int cost = dist + graph[now][i].second;
            int vNum = graph[now][i].first;
            if(cost < table[vNum]){
                table[vNum] = cost;
                q.push(make_pair(-cost,vNum));
            }
        }
    }
}

int main(){
    int v, e, start;
    //vertex개수, edge개수, 시작점
    scanf("%d %d %d", &v, &e, &start);

    for(int i=0; i<e; i++){
        int a, b, c;
        //a vertex에서 b vertex로 가는 비용 c
        scanf("%d %d %d", &a, &b, &c);
        graph[a].push_back(make_pair(b,c));
    }
    
    for(int i=0; i<MAX; i++){
        table[i] = INF;
    }
    
    dijkstra(start);
    
    for(int i=1; i<=v; i++){
        if(table[i] == INF) printf("INF\n");
        else printf("%d\n", table[i]);
    }
}