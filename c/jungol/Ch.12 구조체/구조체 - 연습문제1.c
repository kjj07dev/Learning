#include <stdio.h>

struct Person {
	char name[50];
	int age;
};

int main() {
	struct Person person;

	printf("당신의 이름은 무엇입니까? ");
	scanf("%s", person.name);

	printf("당신의 나이는 몇 살입니까? ");
	scanf("%d", &person.age);

	printf("당신의 이름은 %s이고 나이는 %d세이군요.", person.name, person.age);

	return 0;
}