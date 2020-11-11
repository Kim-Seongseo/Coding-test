#include <stdio.h>
#include <algorithm>
using namespace std;

int arr[100001];
int arr2[100001];

void bs(int arr[], int n, int t){
    int left = 0;
    int right = n - 1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(arr[mid] > t){
            right = mid -1;
        }
        else if(arr[mid] < t){
            left = mid + 1;
        }
        else{
            printf("1\n");
            return;
        }
    }
    printf("0\n");
}

int main(){
    int n1, n2;
    scanf("%d", &n1);
    for(int i=0; i<n1; i++){
        scanf("%d", &arr[i]);
    }
    sort(arr, arr + n1);
    scanf("%d", &n2);
    for(int i=0; i<n2; i++){
        scanf("%d", &arr2[i]);
    }
    for(int i=0; i<n2; i++){
        bs(arr, n1, arr2[i]);
    }
    
    return 0;
}