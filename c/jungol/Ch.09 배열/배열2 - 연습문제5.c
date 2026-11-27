#include <stdio.h>

int main() {
	int arr1[3][3], arr2[3][3];

	for(int i = 0; i < 3; i++) {
		printf("첫 번째 배열 %d행 ", i+1);
		scanf("%d %d %d", &arr1[i][0], &arr1[i][1], &arr1[i][2]);
	}
	for(int i = 0; i < 3; i++) {
		printf("두 번째 배열 %d행 ", i+1);
		scanf("%d %d %d", arr2[i][0], arr2[i][1], arr2[i][2]);
	}

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			printf("%d ", arr1[i][j] + arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}