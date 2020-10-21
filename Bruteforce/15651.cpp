#include <stdio.h>

int data[100];
int arr[100];
int visit[100];

void permutation(int n, int r, int idx){
    if(r == idx){
        for(int i=0; i<r; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else{
        for(int i=0; i<n; i++){
            arr[idx] = data[i];
            visit[i] = true;
            permutation(n, r, idx + 1);
            visit[i] = false;
        }
    }
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++){
        data[i] = i+1;
    }

    permutation(n, m, 0);
    
    return 0;
}