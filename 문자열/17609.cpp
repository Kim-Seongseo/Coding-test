#include <iostream>
#include <string>
#include <string.h>
using namespace std;

char str[100001];

int isPalindrome(char sss[]){
    bool check = true;
    int length = strlen(sss);
    for(int i=0; i<length/2; i++){
        if(sss[i] != sss[length-i-1]){
            check = false;
        }
    }
    if(!check) return 1;
    return 0;;
}

int canPalindrome(char sss[]){
    
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%s", str);
        
        
        
        
        
        
        
        // int len = strlen(str);
        
        // for(int k=0; k<len; k++){
        //     s+=str[k];
        // }

        // if(isPalindrome(str) == 0) printf("0\n");
        // else{
        //     for(int j=0; j<len; j++){
        //         stmp = s.erase(j);
        //         strcpy(tmp, stmp.c_str());
        //         if(isPalindrome(tmp) == 0) printf("1\n");
        //         else printf("2\n");
        //     }
        // }
    }

    return 0;
}