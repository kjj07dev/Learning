#include <stdio.h>

int main() {
	int sum = 0;

	for(int i = 0; i < 5; i++) {
		int n;

		scanf("%d", &n);

		sum += n;
	}

	printf("총점 : %d\n평균 : %.1f", sum, (float)sum/5);
	return 0;
}