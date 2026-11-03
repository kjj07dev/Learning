#include <stdio.h>

int main() {
	while(1) {
		int n, isEscape = 0;

		printf("1. Korea\n2. USA\n3. Japan\n4. China\nnumber? \n");

		scanf("%d", &n);

		switch(n) {
			case 1:
				printf("Seoul\n");
				break;
			case 2:
				printf("Washington\n");
				break;
			case 3:
				printf("Tokyo\n");
				break;
			case 4:
				printf("Beijing\n");
				break;
			default :
				isEscape = 1;
				printf("none\n");
		}
		printf("\n");
		if(isEscape) break;
	}
	return 0;
}