#include <stdio.h>

int arr[1000001];

int findSet(int a){
    if(arr[a] == a) return a;
    else return arr[a] = findSet(arr[a]);
}

int main(){
    int n, m, a, b, c;
    scanf("%d %d", &n, &m);
    for(int i=0; i<=n; i++){
        arr[i] = i;
    }
    for(int i=0; i<m; i++){
        scanf("%d %d %d", &a, &b, &c);
        if(a == 0){
            b = findSet(b);
            c = findSet(c);
            if(b > c) arr[b] = c;
            else if(b < c) arr[c] = b;
        }
        else{
            b = findSet(b);
            c = findSet(c);
            if(b == c) printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}