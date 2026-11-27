#include <stdio.h>

int main() {
	int arr[4][3];
	int sum[4] = {};

	for(int i = 0; i < 4; i++) {
		printf("%dclass? ", i+1);
		for(int j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 3; j++) {
			sum[i] += arr[i][j];
		}
	}

	for(int i = 0; i < 4; i++) {
		printf("%dclass : %d\n", i+1, sum[i]);
	}

	return 0;
}