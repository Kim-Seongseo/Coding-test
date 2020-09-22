#include <stdio.h>
int arr[1000001];
void quickSort(int arr[], int LEFT, int RIGHT){
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
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}