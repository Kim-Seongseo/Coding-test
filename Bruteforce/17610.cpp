#include <stdio.h>
#include <math.h>

int chk[3000000];
int arr[14];

void comb(int n, int idx, int left, int right){
    if(n == idx){
        chk[abs(left-right)] = 1;
        return;
    }
    comb(n, idx + 1, left + arr[idx], right);
    comb(n, idx + 1, left, right + arr[idx]);
    comb(n, idx + 1, left, right);
}

int main(){
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    comb(n, 0, 0, 0);
    int ans = 0;
    for(int i=1; i<=sum; i++){
        if(chk[i] == 0){
            ans++;
        }
    }
    printf("%d", ans);
    return 0;
}