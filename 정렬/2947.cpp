#include <iostream>

using namespace std;

int main(void) {
	int arr[5] = { 0, };
	for (int i = 0; i < 5; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < 4; i++) {
		for (int k = 0; k < 4-i; k++) {
			if (arr[k] > arr[k + 1]) {
				int tmp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = tmp;
				for (int j = 0; j < 5; j++)
					printf("%d ", arr[j]);
				printf("\n");
			}
		}
	}

	return 0;
}