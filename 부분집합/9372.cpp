#include <stdio.h>  
 
int main(void) { 
    int T; 
    scanf("%d", &T);
    while(T--){
        int n, m;
        scanf("%d %d", &n, &m);
        for (int i = 0; i < m; i++){
            int a, b; 
            scanf("%d %d", &a, &b);
        }
        printf("%d\n", n-1);
    }
    return 0;
}