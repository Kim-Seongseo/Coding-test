#include <iostream>
#include <string.h>
using namespace std;
char arr[101][101];
int main(){
    int n, cnt1=0, cnt2=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(j == n-2){
                if(arr[i][j]=='.' && arr[i][j+1]=='.'){
                    cnt1++;
                    break;
                }
            }
            else{
                if((arr[i][j]=='.' && arr[i][j+1]=='.' && arr[i][j+2]!='.') || (arr[i][j]!='.' && arr[i][j+1]=='.' && arr[i][j+2]=='.')){
                    cnt1++;
                    break;
                }
            }
        }
    }
    for(int j=0; j<n; j++){
        for(int i=0; i<n-1; i++){
            if(i == n-2){
                if(arr[i][j]=='.' && arr[i+1][j]=='.'){
                    cnt2++;
                    break;
                }
            }
            else{
                if((arr[i][j]=='.' && arr[i+1][j]=='.' && arr[i+2][j]!='.') || (arr[i][j]!='.' && arr[i+1][j]=='.' && arr[i+2][j]=='.')){
                    cnt2++;
                    break;
                }
            }
        }
    }
    printf("%d %d", cnt1, cnt2);

    return 0;
}