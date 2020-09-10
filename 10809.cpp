#include <stdio.h>
#include <string.h>

int main() {
    char arr[101];
    scanf("%s", arr);
    int idx[26];
    int i;
    for(i=0; i<26; i++){
        idx[i]=-1;
    }
    //for(i=0; i<strlen(arr); i++){   //strlen은 i 증가할때마다 계속 계산함.
    for(i=0; arr[i] != 0; i++){     //이렇게 쓰거나 int length = strlen(arr); 식으로 빼야함
        if(idx[arr[i]-97] == -1){
            idx[arr[i]-97] = i;
        }
    }
    for(i=0; i<26; i++){
        printf("%d ", idx[i]);
    }
    return 0;
}