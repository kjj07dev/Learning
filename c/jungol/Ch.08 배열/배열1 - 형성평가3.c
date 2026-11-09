#include <stdio.h>

int main() {
	int o_sum = 0, e_sum = 0;

	for(int i = 1; i <= 10; i++) {
		int t;
		
		scanf("%d", &t);

		if(i%2) o_sum += t;
		else e_sum += t;
	}

	printf("odd : %d\neven : %d", o_sum, e_sum);

	return 0;
}