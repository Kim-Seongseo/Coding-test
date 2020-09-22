#include <iostream>
#include <algorithm>
using namespace std;

class Student {
public:
	string name = "";
	int kor = 0, eng = 0, math = 0;
};
bool cmp(Student& s1, Student& s2) {
	if (s1.kor == s2.kor) {
		if (s1.eng == s2.eng) {
			if (s1.math == s2.math)
				return s1.name < s2.name;
			else
				return s1.math > s2.math;
		}
		else
			return s1.eng < s2.eng;
	}
	else
		return s1.kor > s2.kor;
}
Student arr[100000];
int main() {
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i].name >> arr[i].kor >> arr[i].eng >> arr[i].math;
	}
	sort(arr, arr + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << arr[i].name << "\n";
	}
	return 0;
}