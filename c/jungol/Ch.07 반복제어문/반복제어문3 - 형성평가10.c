#include <stdio.h>

int main() {
	int cnt = 1, n;

	scanf("%d", &n);

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			printf("%d ", cnt%10);
			cnt += 2;
		}
		printf("\n");
	}
	return 0;
}