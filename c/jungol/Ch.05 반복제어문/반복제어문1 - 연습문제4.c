#include <stdio.h>

int main() {
	int sum = 0, cnt = 0;
	while(1) {
		int n;

		scanf("%d", &n);

		if(n == 0) {
			break;
		}

		sum+=n;
		cnt++;
	}

	printf("입력된 자료의 개수 = %d\n입력된 자료의 합계 = %d\n입력된 자료의 평균 = %.2f", cnt, sum, (float)(sum)/cnt);
	return 0;
}