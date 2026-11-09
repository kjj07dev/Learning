#include <stdio.h>

int main() {
	double sum = 0, arr[7] = {0, 85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
	int a, b;

	scanf("%d %d", &a, &b);
	sum += arr[a];
	sum += arr[b];

	printf("%.1f", sum);

	return 0;
}