#include <stdio.h>

int arr[100];
int n, sum = 0, cnt = 0;

void subSet(int num, int s) {
    s += arr[num];
    if (num >=n) {
        return;
    }
    if (s == sum) {
        cnt+=1;
    }
    subSet(num + 1, s - arr[num]);
    subSet(num + 1, s);
}

int main(){
    scanf("%d %d", &n, &sum);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    subSet(0, 0);
    printf("%d\n", cnt);
    return 0;
}