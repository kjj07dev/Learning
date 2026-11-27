#include <stdio.h>

int main() {
	int sum = 0, cnt = 0;

	while(1) {
		int n;

		scanf("%d", &n);

		if(n == 0) {
			break;
		}
		else if(n % 2) {
			sum += n;
			cnt++;
		}
	}
	printf("홀수의 합 = %d\n홀수의 평균 = %d", sum, sum / cnt);
	return 0;
}