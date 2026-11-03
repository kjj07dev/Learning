#include <stdio.h>

int main() {
	while(1) {
		int n;
		int isEscape = 0;

		printf("1. 입력하기\n2. 출력하기\n3. 삭제하기\n4. 끝내기\n작업할 번호를 선택하세요. \n");

		scanf("%d", &n);

		switch(n) {
			case 1:
				printf("입력하기를 선택하였습니다.\n");
				break;
			case 2:
				printf("출력하기를 선택하였습니다.\n");
				break;
			case 3:
				printf("삭제하기를 선택하였습니다.\n");
				break;
			case 4:
				isEscape = 1;
				printf("끝내기를 선택하였습니다.\n");
				break;
			default :
				printf("잘못 입력하였습니다.\n");
		}
		printf("\n");
		if(isEscape) {
			break;
		}
	}
	return 0;
}