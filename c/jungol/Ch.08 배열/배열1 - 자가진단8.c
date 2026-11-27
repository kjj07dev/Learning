#include <stdio.h>

int main() {
	int o_sum = 0, e_sum = 0;

	for(int i = 1; i <= 10; i++) {
		int t;
		
		scanf("%d", &t);

		if(i%2) o_sum += t;
		else e_sum += t;
	}

	printf("sum : %d\navg : %.1f", e_sum, (float)o_sum / 5);

	return 0;
}