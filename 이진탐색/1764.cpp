#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string arr[100001];
vector<string> v;

void bs(string arr[], int n, string t){
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
            v.push_back(t);
            return;
        }
    }
    return;
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for(int i=0; i<m; i++){
        string s;
        cin >> s;
        bs(arr, n, s);
    }
    sort(v.begin(), v.end());
    int len = v.size();
    printf("%d\n", len);
    for(int i=0; i<len; i++){
        cout << v[i] << endl;
    }
    return 0;
}