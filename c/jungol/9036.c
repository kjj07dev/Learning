#include <stdio.h>

int main() {
	int n;
	printf("1. 삽입\n2. 수정\n3. 삭제\n숫자를 선택하세요. ");
	scanf("%d", &n);

	switch(n) {
		case 1:
			printf("삽입을 선택하셨습니다.");
			break;
		case 2:
			printf("수정을 선택하셨습니다.");
			break;
		case 3:
			printf("삭제를 선택하셨습니다.");
			break;
	}
	return 0;
}
