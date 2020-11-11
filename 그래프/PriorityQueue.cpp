#include <stdio.h>
#include <queue>
using namespace std;

int main(){
    priority_queue<pair<int,int>> q;
    q.push({5,3});
    q.push({4,8});
    q.push({7,2});
    q.push({2,4});
    q.push({1,9});
    pair<int, int> n = q.top();
    q.pop();
    printf("%d %d\n", n.first, n.second);
    
    return 0;
}