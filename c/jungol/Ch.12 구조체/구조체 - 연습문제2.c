#include <stdio.h>

struct Person {
	char name[50];
	int age;
};

int main() {
	struct Person person;
	printf("친한 친구의 이름과 나이를 입력하세요. ");
	scanf("%s %d", person.name, &person.age);
	printf("당신의 이름 : %s, 나이 : %d\n", ((struct Person){"손예준",12}).name, (struct Person){"손예준",12}.age);
	printf("친구의 이름 : %s, 나이 : %d", person.name, person.age);
	return 0;
}