#include <stdio.h>

int main() {
	int n;

	scanf("%d", &n);

	printf("%s", ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) ? "leap year" : "common year");
	
	return 0;
}
