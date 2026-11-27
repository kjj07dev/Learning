#include <stdio.h>

int main() {
	while(1) {
		int n;

		printf("점수를 입력하세요. ");

		scanf("%d", &n);

		if(n > 100 || n < 0) {
			break;
		}
		else if (n >= 80) {
			printf("축하합니다. 합격입니다.\n");
		}
		else {
			printf("죄송합니다. 불합격입니다.\n");
		}
	}
	return 0;
}