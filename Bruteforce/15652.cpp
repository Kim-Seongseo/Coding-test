#include <stdio.h>

int data[100];
int arr[100];
int visit[100];
int nn;
void permutation(int n, int r, int idx){
    if(r == idx){
        for(int i=0; i<r; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else{
        for(int i=n-1; i<nn; i++){
            arr[idx] = data[i];
            visit[i] = true;
            permutation(i+1, r, idx + 1);
            visit[i] = false;
        }
    }
}

int main(){
    int m;
    scanf("%d %d", &nn, &m);

    for(int i=0; i<nn; i++){
        data[i] = i+1;
    }

    permutation(1, m, 0);
    
    return 0;
}