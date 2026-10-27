#include <stdio.h>

int main() {
	int n, m;

	scanf("%d %d", &n, &m);

	printf("입력받은 수 중 큰 수는 %d이고 작은 수는 %d입니다.", (n > m ? n : m), (m > n ? n : m));
	return 0;
}
