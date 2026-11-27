#include <stdio.h>

int main() {
	int n;
	double sum = 0;

	scanf("%d", &n);

	for(int i = 0; i < n; i++) {
		double t;

		scanf("%lf", &t);

		sum += t;
	}

	printf("%.2f", sum / n);

	return 0;
}