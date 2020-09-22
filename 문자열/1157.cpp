#include <stdio.h>
#include <string.h>

char str[1000001];
int main() {
    scanf("%s", str);
    for(int i=0; str[i]!=0; i++){
        if(str[i]-'A'>25)
            str[i]=str[i]-'a'+'A';
    }
    for(int i=0; str[i]!=0; i++){
        
    }

    return 0;
}