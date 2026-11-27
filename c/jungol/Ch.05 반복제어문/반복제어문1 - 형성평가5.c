#include <stdio.h>

int main() {
	while(1) {
		int a, b;
		char c;
		printf("Base = ");
		scanf("%d", &a);
		printf("Height = ");
		scanf("%d", &b);

		printf("Triangle width = %.1f\n", (float)a * b /2);

		printf("Continue? ");
		scanf(" %c", &c);

		if(c == 'Y' || c == 'y') {
			continue;
		}
		else break;
	}	
	return 0;
}