#include <stdio.h>

int main() {
	while(1) {
		int n;

		printf("number? ");

		scanf("%d", &n);

		if(n == 0) {
			break;
		}
		else if(n > 0) {
			printf("positive integer\n");
		}
		else {
			printf("negative number\n");
		}
	}
	return 0;
}