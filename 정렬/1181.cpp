#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string arr[20001];

bool cmp(string s1, string s2) {
    int len1 = s1.size(), len2 = s2.size();
	if (len1 != len2) return len1 < len2;
	else return s1 < s2;
}
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		cin >> arr[i];
    }
	sort(arr, arr + n, cmp);
    for(int i=0; i<n; i++){
        if(i != 0){
            if(arr[i].compare(arr[i-1]) == 0) continue;
        }
        cout << arr[i] << "\n";
    }
	return 0;
}