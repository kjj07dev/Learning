#include <stdio.h>

int main() {
	int n, i = 0, sum = 0, cnt = 0;

	scanf("%d", &n);

	while(sum < n) {
		i++;
		if(i%2) {
			sum += i;
			cnt++;
		}
	}

	printf("%d %d", cnt, sum);
	return 0;
}