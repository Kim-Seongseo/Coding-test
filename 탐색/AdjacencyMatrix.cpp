#include <stdio.h>
#include <vector>
using namespace std;

vector<int> arr[7];

int main(){
    int n, a, b;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d", &a, &b);
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    for(int i=0; i<7; i++){
        printf("%d : ", i);
        for(int j=0; j<arr[i].size(); j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}