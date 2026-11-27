#include <stdio.h>

int main() {
	double sum = 0;

	for(int i = 0; i < 6; i++) {
		double t;

		scanf("%lf", &t);

		sum += t;
	}

	printf("%.1f", sum / 6);
	return 0;
}