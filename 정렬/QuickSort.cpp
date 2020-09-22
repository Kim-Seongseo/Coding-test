#include <stdio.h>

void quickSort(int arr[], int LEFT, int RIGHT){     //O(NlogN)
    int pivot = arr[(LEFT+RIGHT) / 2];
    int leftP = LEFT;
    int rightP = RIGHT;

    while(leftP <= rightP){
        while(arr[leftP] < pivot) leftP++;
        while(arr[rightP] > pivot) rightP--;

        if(leftP <= rightP){
            int temp = arr[leftP];
            arr[leftP] = arr[rightP];
            arr[rightP] = temp;
            leftP++;
            rightP--;
        }
    }

    if(LEFT < rightP){
        quickSort(arr, LEFT, rightP);
    }
    if(leftP < RIGHT){
        quickSort(arr, leftP, RIGHT);
    }
}

int main(){
    int arr[] = {7, 3, 6, 5, 2, 4, 8, 1, 9, 3, 6, 2, 64};
    int N = 13;

    quickSort(arr, 0, N-1);

    for(int i=0; i<N; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}