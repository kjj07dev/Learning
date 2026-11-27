#include <stdio.h>

int main() {
	int sum = 0, cnt = 0;

	while(1) {
		int n;

		scanf("%d", &n);

		sum += n;
		cnt++;

		if(n >=100) {
			break;
		}
	}

	printf("%d\n%.1f", sum, (float)sum / cnt);
	return 0;
}