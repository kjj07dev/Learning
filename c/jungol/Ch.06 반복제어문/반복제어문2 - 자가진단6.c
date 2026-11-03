#include <stdio.h>

int main() {
	int n, sum = 0;

	scanf("%d", &n);

	for(int i = 0; i < n; i++) {
		int t;
		scanf("%d", &t);

		sum += t;
	}

	printf("avg : %.1f\n", (float)sum / n);
	if((float)sum / n >= 80) {
		printf("pass");
	}
	else printf("fail");
	return 0;
}