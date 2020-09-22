#include <stdio.h>
#include <string.h>

char str[101];

int isContain(char c){
    char s[]="CAMBRIDGE";
    for(int i=0; s[i]!=0; i++){
        if(c==s[i]) return 1;
    }
    return 0;
}

int main() {
    scanf("%s", str);
    for(int i=0; str[i] != 0; i++){
        if(isContain(str[i]) == 1){
            continue;
        }
        printf("%c", str[i]);
    }
    return 0;
}