#include <stdio.h>

int main(){
    int arr[6]={7, 1, 3, 5, 2, 4};
    int n = 6;

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}