#include <stdio.h>

int main() {
	int n;

	scanf("%d", &n);

	printf("%s", n == 0 ? "zero" : (n > 0 ? "plus" : "minus"));
	return 0;
}
