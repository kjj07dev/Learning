#include <stdio.h>

int main() {
	int sum = 0, i = 0, M5 = 0;

	while(1) {
		int t;
		scanf("%d", &t);

		if(t == 0) break;
		if(t % 5 == 0) {
			M5++;
			sum += t;
			i++;
		}
	}

	printf("Multiples of 5 : %d\nsum : %d\navg : %.1f\n", M5, sum, (float)sum / i);
	return 0;
}