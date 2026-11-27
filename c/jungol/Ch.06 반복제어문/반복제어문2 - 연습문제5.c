#include <stdio.h>

int main() {
	int cnt = 0;
	for(int i = 0; i < 10; i++) {
		int n;

		scanf("%d", &n);

		if(n % 2 == 0) {
			cnt++;
		}
	}

	printf("입력받은 짝수는 %d개입니다.", cnt);
	return 0;
}