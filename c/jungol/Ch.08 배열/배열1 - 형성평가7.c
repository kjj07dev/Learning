#include <stdio.h>

int main() {
	int min = 0x7FFFFFFF, max = 0x80000000;

	while(1) {
		int t;
		scanf("%d", &t);

		if(t == 999) break;

		if(t < min) min = t;
		if(t > max) max = t;
	}

	printf("max : %d\nmin : %d", max, min);
	return 0;
}