#include <stdio.h>

int main() {
	int sum = 0, i = 0, n;
	scanf("%d", &n);
	
	while(sum <= n) {
		i++;
		sum += i;
	}

	printf("%d %d", i, sum);
	return 0;
}