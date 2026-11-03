#include <stdio.h>

int main() {
	int cnt = 1, n;
	char c = 'A';

	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {
		for(int j = 0; j < n - i +1; j++) {
			printf("%d ", cnt);
			cnt++;
		}
		for(int j = 0; j < i; j++) {
			printf("%c ", c);
			c++;
		}
		printf("\n");
	}
	return 0;
}