#include <stdio.h>

int main() {
	int max = 0;

	for(int i = 0; i < 10; i++) {
		int t;

		scanf("%d", &t);

		if(t > max) max = t;
	}

	printf("%d", max);
	
	return 0;
}