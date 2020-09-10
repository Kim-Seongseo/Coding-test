#include <stdio.h>
#include <string.h>

char str[100];

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%s", str);
        int ans=1, cnt=0;
        for(int j=0; str[j]!=0; j++){
            if(str[j]=='O'){
                cnt+=ans;
                ans++;
            }
            else{
                ans=1;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}