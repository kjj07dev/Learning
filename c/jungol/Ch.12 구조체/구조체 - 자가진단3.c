#include <stdio.h>

struct Student {
	char name[50];
	int korean;
	int english;
};

int main() {
	struct Student student[2];

	for(int i = 0; i < 2; i++) {
		scanf("%s %d %d", student[i].name, &student[i].korean, &student[i].english);
	}

	int kor_sum = 0, eng_sum = 0;
	for(int i = 0; i < 2; i++) {
		printf("%s %d %d\n", student[i].name, student[i].korean, student[i].english);
		kor_sum += student[i].korean;
		eng_sum += student[i].english;
	}
	printf("avg %d %d", kor_sum /2, eng_sum /2);
	return 0;
}