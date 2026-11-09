#include <stdio.h>

int main() {
	int arr[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	while(1) {
		int y, m;
		printf("YEAR = ");
		scanf("%d\n", &y);

		printf("MONTH = ");
		scanf("%d\n", &m);

		if(y == 0 && m == 0) break;

		if(y == 0 || (m > 12 || m < 1)) {
			printf("잘못 입력하였습니다.\n\n");
			continue;
		}

		if(m == 2 && ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0 )) printf("입력하신 달의 날 수는 29일입니다.");
		else printf("입력하신 달의 날 수는 %d일입니다.", arr[m]);
		
		printf("\n\n");
	}
	return 0;
}