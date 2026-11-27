#include <stdio.h>

int main() {
	int sum = 0;

	for(int i = 1; i <= 5; i++) {
		int t;
		scanf("%d", &t);
		if(i%2) sum += t;
	}

	printf("%d", sum);
	return 0;
}