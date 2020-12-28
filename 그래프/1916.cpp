#include <stdio.h>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int visit[1001];
int cost[1001];
vector<pair<int, int>> arr[1001];
priority_queue<pair<int,int>> pq;
int v, e, start, finish;

int main(){
    scanf("%d %d", &v, &e);

    for(int i=0; i<e; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        arr[a].push_back({b, c});
    }
    
    scanf("%d %d", &start, &finish);

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
        int p = t.second;     //현재 위치

        for(int i=0; i<arr[p].size(); i++){
            int nextPos = arr[p][i].first;
            int nextCost = arr[p][i].second;
            if(cost[nextPos] > c + nextCost){
                cost[nextPos] = c + nextCost;   //갱신
                pq.push({-cost[nextPos], nextPos});
            }
        }
    }

    printf("%d", cost[finish]);

    return 0;
}