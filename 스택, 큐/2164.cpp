#include <stdio.h>
#include <queue>
using namespace std;

int main(){
    queue<int> q;
    int n, cnt = 1;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        q.push(i+1);
    }
    while(q.size()!=1){
        if(cnt%2!=0){
            q.pop();
        }
        else{
            int tmp = q.front();
            q.pop();
            q.push(tmp);
        }
        cnt++;
    }
    printf("%d", q.front());
    return 0;
}