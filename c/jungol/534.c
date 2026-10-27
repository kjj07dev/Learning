#include <stdio.h>

int main() {
	char c;

	scanf("%c", &c);

	switch(c) {
		case 'A':
			printf("Excellent");
			break;
		case 'B':
			printf("Good");
			break;
		case 'C':
			printf("Usually");
			break;
		case 'D':
			printf("Effort");
			break;
		case 'F':
			printf("Failure");
			break;
		default :
			printf("error");
	}
	return 0;
}
