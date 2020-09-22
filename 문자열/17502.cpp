#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char str[101] = {0, };
    scanf("%d%s", &n, str);

    for(int i=0; i<n/2; i++){
        if(str[i] != '?'){
            str[n-i-1] = str[i];
        }
        else{
            str[i] = str[n-i-1];
        }
    }

    for(int i=0; i<n; i++){
        if(str[i] == '?') str[i] = 'a';
    }
    printf("%s", str);
    return 0;
}