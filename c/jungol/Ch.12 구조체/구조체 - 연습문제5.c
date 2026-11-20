#include <stdio.h>

struct Person {
	int num;
	int value;
};

int main() {
	struct Person person[5];

	for(int i = 0; i < 5; i++) {
		printf("%d번 저축금액은? ", i+1);
		scanf("%d", &person[i].value);
		person[i].num = i+1;
	}

	int max = 0, num;

	for(int i = 0; i < 5; i++) {
		if(person[i].value > max) {
			max = person[i].value;
			num = person[i].num;
		}
	}

	printf("저축왕 %d번 %d원", num, max);
}