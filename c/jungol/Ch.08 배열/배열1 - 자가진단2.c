#include <stdio.h>

int main() {
	int arr[11] = {};

	for(int i = 1; i <= 10; i++) {
		arr[i] = i;
	}

	for(int i = 1; i <= 10; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}