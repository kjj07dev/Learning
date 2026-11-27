#include <stdio.h>

struct Student {
	char name[21];
	int age;
};

int main() {
	struct Student student;
	printf("%d grade in %s School\n", ((struct Student){"Jejuelementary", 6}).age, ((struct Student){"Jejuelementary", 6}).name);
	scanf("%s %d", student.name, &student.age);
	printf("%d grade in %s School", student.age, student.name);
	return 0;
}