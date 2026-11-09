#include <stdio.h>

int main() {
	int sum = 0;

	for(int i = 0; i < 10; i++) {
		int t;

		scanf("%d", &t);

		sum += t;
	}

	printf("총점 = %d\n평균 = %.1f", sum, (float)sum / 10);
	return 0;
}