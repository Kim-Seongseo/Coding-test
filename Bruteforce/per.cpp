#include <stdio.h>

int data[4] = { 5, 6, 7, 8 };
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
            if(visit[i] == 0){
                arr[idx] = data[i];
                visit[i] = true;
                permutation(n, r, idx + 1);
                visit[i] = false;
            }
        }
    }
}

int main(){
    int n = 4;
    int r = 3;

    permutation(n, r, 0);
    
    return 0;
}