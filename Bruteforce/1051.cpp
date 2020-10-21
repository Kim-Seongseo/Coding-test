#include <stdio.h>

char str[100][100];

int main(){
    int h, w;
    scanf("%d %d", &h, &w);
    
    int maxLen = h > w ? w : h;
    int ans = 0;
    for(int i=0; i<h; i++){
        scanf("%s", str[i]);
    }


    for(int i=1; i<=maxLen; i++){
        for(int y=0; y<h; y++){
            for(int x=0; x<w; x++){
                int rX, rY, dX, dY, rdX, rdY;
                rX = x + i - 1;
                rY = y;

                dX = x;
                dY = y + i - 1;

                rdX = x + i - 1;
                rdY = y + i - 1;

                if(str[y][x] == str[rY][rX] && str[rY][rX] == str[dY][dX] && str[dY][dX] == str[rdY][rdX]){
                    if(ans < i){
                        ans = i;
                    }
                }
            }
        }
    }
    printf("%d\n", ans * ans);
    
    return 0;
}