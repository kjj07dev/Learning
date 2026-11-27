#include <stdio.h>

struct Student {
	char name[50];
	int height;
};

int main() {
	int sm = 999999999, tp;
	struct Student student[5];

	for(int i = 0; i < 5; i++) {
		scanf("%s %d", student[i].name, &student[i].height);
		if(student[i].height < sm) {
			tp = i;
			sm = student[i].height;
		}
	}

	printf("%s %d", student[tp].name, student[tp].height);

	return 0; 
}