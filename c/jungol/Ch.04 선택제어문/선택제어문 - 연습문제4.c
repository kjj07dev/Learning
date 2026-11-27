#include <stdio.h>

int main() {
	int n;

	printf("점수를 입력하세요. ");

	scanf("%d", &n);
	
	switch(n/10) {
		case 9: 
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		case 6:
			printf("D");
			break;
		default :
			printf("F");
			break;
	}
	return 0;
}
