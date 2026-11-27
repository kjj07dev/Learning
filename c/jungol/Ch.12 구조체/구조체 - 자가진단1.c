#include <stdio.h>

struct Student {
	char name[21];
	char school_name[21];
	int age;
};

int main() {
	struct Student student;
	scanf("%s %s %d", student.name, student.school_name, &student.age);
	printf("Name : %s\nSchool : %s\nGrade : %d", student.name, student.school_name, student.age);
	return 0;
}