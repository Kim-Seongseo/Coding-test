#include <stdio.h>

int arr[10001];

int main(){
    int n, t;
    scanf("%d", &n);
    for(int i=0; i<n; i++){     //counting 정렬 (index의 값 +1, index 출력)
        scanf("%d", &t);
        arr[t]++;
    }
    for(int i=0; i<10001; i++){
        for(int j=0; j<arr[i]; j++){
            printf("%d\n", i);
        }
    }
    return 0;
}