#include <stdio.h>
#include <string.h>

char str[21];

int main() {
    int T, R;
    scanf("%d", &T);
    for(int i=0; i<T; i++){
        scanf("%d%s", &R, str);
        for(int j=0; str[j] != 0; j++){
            for(int k=0; k<R; k++){
                printf("%c", str[j]);
            }
        }
        printf("\n");
    }
    return 0;
}