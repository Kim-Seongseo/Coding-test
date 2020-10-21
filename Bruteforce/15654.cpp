#include <stdio.h>
#include <algorithm>
using namespace std;

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
    int n, m;
    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++){
        scanf("%d", &data[i]);
    }
    sort(data, data + n);
    permutation(n, m, 0);
    
    return 0;
}