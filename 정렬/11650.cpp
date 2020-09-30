#include <iostream>
#include <algorithm>
using namespace std;

class Pos {
public:
	int x, y;
};
bool cmp(Pos& p1, Pos& p2) {
    if(p1.x == p2.x) return p1.y < p2.y;
    else return p1.x < p2.x;
}
Pos arr[100001];
int main() {
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i].x >> arr[i].y;
	}
	sort(arr, arr + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << arr[i].x << " " << arr[i].y << "\n";
	}
	return 0;
}