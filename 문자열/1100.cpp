#include <iostream>
#include <string.h>
using namespace std;

char arr[8][8];

int main() {
    int count=0;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 'F'){
                if(i%2==0 && j%2==0) count++;
                else if(i%2==1 && j%2==1) count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}