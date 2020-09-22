#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%s", str);
    bool check = true;
    int length = strlen(str);
    for(int i=0; i<length/2; i++){
        if(str[i] != str[length-i-1]){
            check = false;
        }
    }
    if(!check) printf("0");
    else printf("1");
    return 0;
}