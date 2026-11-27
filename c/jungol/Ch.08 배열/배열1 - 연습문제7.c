#include <stdio.h>

int main() {
	int o_min = 0x7FFFFFFF, e_max = 0x80000000;

	for(int i = 0; i < 10; i++) {
		int t;

		scanf("%d", &t);
		
		if(t < o_min && t % 2) o_min = t;
		if(t > e_max && t % 2 == 0) e_max = t;
 	}

	printf("%d %d", o_min, e_max);
	return 0;
}