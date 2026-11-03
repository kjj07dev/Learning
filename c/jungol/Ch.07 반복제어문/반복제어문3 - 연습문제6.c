#include <stdio.h>

int main() {
	int cnt = 1, n;

	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {
		for(int j = 0; j < i; j++) {
			printf("%d ", cnt);
			cnt++;
		}
		printf("\n");
	}
	return 0;
}