#include <stdio.h>

int main() {
	int sum = 0, arr[4][3] = {
		{3, 5, 9},
		{2, 11, 5},
		{8, 30, 10}, 
		{22, 5, 1}
	};

	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 3; j++) {
			printf("%d ", arr[i][j]);
			sum += arr[i][j];
		}
		printf("\n");
	}

	printf("%d", sum);

	return 0;
}