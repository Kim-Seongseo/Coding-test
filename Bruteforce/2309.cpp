#include <stdio.h>
#include <algorithm>
using namespace std;

int arr[9];

int main(){
    int sum=0, n=9;
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    sort(arr, arr + n);
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(sum - (arr[i]+arr[j]) == 100){
                for(int k=0; k<n; k++){
                    if(k == i || k == j) continue;
                    printf("%d\n", arr[k]);
                }
                return 0;
            }
        }
    }
    return 0;
}