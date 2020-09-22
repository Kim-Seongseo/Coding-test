#include <stdio.h>
#include <string.h>

char str[1001];

int main() {
    int cnt=0;
    scanf("%s", str);
    for(int i=0; str[i]!=0; i++){
        if(str[i]=='@') cnt++;
        if(str[i]=='('){
            printf("%d ", cnt);
            cnt = 0;
        }
    }
    printf("%d", cnt);
    return 0;
}