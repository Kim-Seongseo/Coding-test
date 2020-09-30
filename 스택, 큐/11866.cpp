#include <stdio.h>
#include <queue>
using namespace std;

int main(){
    queue<int> q;
    int n, k;
    scanf("%d %d", &n, &k);

    for(int i=0; i<n; i++){
        q.push(i+1);
    }
    printf("<");
    while(!q.empty()){
        for(int i=0; i<k-1; i++){
            q.push(q.front());
            q.pop();
        }
        printf("%d", q.front());
        q.pop();
        if(!q.empty()) printf(", ");
    }
    printf(">");
    return 0;
}