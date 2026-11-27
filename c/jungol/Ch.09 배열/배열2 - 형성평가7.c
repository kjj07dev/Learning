#include <stdio.h>

int main() {
	int arr1[2][3], arr2[2][3];

	printf("first array\n");
	for(int i = 0; i < 2; i++) {
		scanf("%d %d %d", &arr1[i][0], &arr1[i][1], &arr1[i][2]);
	}

	printf("second array\n");
	for(int i = 0; i < 2; i++) {
		scanf("%d %d %d", &arr2[i][0], &arr2[i][1], &arr2[i][2]);
	}

	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			printf("%d ", arr1[i][j] * arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}