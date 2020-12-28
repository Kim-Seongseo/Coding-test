#include <stdio.h>
#include <queue>
#include <vector>
using namespace std;

int visit[500000];
int cost[500000];
vector<pair<int, int>> arr[500000];
priority_queue<pair<int,int>> pq;

int main(){
    int v, e, k, start;
    scanf("%d %d %d %d", &v, &e, &k, &start);

    for(int i=0; i<e; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        arr[a].push_back({b, 1});
    }
    
    for(int i=1; i<=v; i++){
        cost[i] = 1000000000;
    }

    //다익스트라
    cost[start] = 0;
    pq.push({0, start});
    //세팅 끝

    while(!pq.empty()){
        pair<int,int> t = pq.top();
        pq.pop();
        if(visit[t.second] == 1) continue;
        
        visit[t.second] = 1;

        int c = -t.first;    //현재 위치까지의 비용
        int p = t.second;    //현재 위치

        for(int i=0; i<arr[p].size(); i++){
            int nextPos = arr[p][i].first;
            int nextCost = arr[p][i].second;
            if(cost[nextPos] > c + nextCost){
                cost[nextPos] = c + nextCost;   //갱신
                pq.push({-cost[nextPos], nextPos});
            }
        }
    }

    int cnt = 0;
    for(int i=1; i<=v; i++){
        if(cost[i] == k) {
            printf("%d\n", i);
            cnt++;
        }
    }
    if(cnt == 0) printf("-1\n");

    return 0;
}