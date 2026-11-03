#include <stdio.h>

int main() {
	int cnt = 0, sum = 0;
	for(int i = 0; i < 20; i++) {
		int n;
		scanf("%d", &n);

		if(n == 0) {
			break;
		}

		sum += n;
		cnt++;
	}

	printf("%d %d", sum, sum / cnt);
	return 0;
}