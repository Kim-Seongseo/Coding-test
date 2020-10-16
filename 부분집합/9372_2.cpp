#include <stdio.h>

int p[2000];
int n, m;

int find(int x){
    if(p[x] == x) return x;
    p[x] = find(p[x]);
    return p[x];
}

void u(int x, int y){
    p[find(x)] = find(y);
}

int main(){
    int tc;
    scanf("%d", &tc);
    for(int t=0; t<tc; t++){
        scanf("%d %d", &n, &m);
        for(int i=1; i<=n; i++){
            p[i] = i;
        }
        int cnt = 0;
        for(int i=1; i<=m; i++){
            int s, e;
            scanf("%d %d", &s, &e);
            if(find(s) != find(e)){
                u(s, e);
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}