#include <stdio.h>

int an[100]={1, 2, 3, 4};
int visit[100];
int arr[100];

void subSet(int n, int idx){
    if(n == idx){
        for(int i=0; i<n; i++){
            if(visit[i] == 1){
                printf("%d ", arr[i]);
            }
        }
        printf("\n");
    }
    else{
        arr[idx] = an[idx];
        visit[idx] = 0;
        subSet(n, idx + 1);
        visit[idx] = 1;
        subSet(n, idx + 1);
    }
}

int main(){
    int n = 4;
    
    subSet(n, 0);

    return 0;
}