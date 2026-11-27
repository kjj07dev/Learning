#include <stdio.h>

int main() {
	int max = -1, min = 10000;

	for(int i = 0; i < 10; i++) {
		int t;

		scanf("%d", &t);

		if(t < 100 && t > max) max = t;
		if(t >= 100 && t < min) min = t;
	}

	if(max == -1) max = 100;
	if(min == 10000) min = 100;
	
	printf("%d %d", max, min);
	return 0;
}