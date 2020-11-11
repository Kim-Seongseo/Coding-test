#include <stdio.h>
#include <algorithm>
using namespace std;

int arr[20000];

int main(){
    int n, maxCost = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if(maxCost < arr[i]){
            maxCost = arr[i];
        }
    }

    int cost;
    scanf("%d", &cost);

    int left = 0;
    int right = maxCost;
    int ans = 0;
    while(left <= right){
        int m = (left + right) / 2;
        int sum = 0;
        for(int i=0; i<n; i++){
            if(m < arr[i]) sum += m;
            else sum += arr[i];
        }
        if(sum < cost){
            if(ans < m) ans = m;
            left = m + 1;
        }
        else if(sum == cost){
            ans = m;
            break;
        }
        else{
            right = m - 1;
        }
    }
    printf("%d\n", ans);
    
    return 0;
}