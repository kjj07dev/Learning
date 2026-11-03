#include <stdio.h>

int main() {
	int n, cnt=1;
	scanf("%d", &n);

	while(n*cnt < 100) {
		printf("%d ", cnt * n);

		if((cnt * n) % 10 == 0) break;

		cnt++;
	}
	return 0;
}