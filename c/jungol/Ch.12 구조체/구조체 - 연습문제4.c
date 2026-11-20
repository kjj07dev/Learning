#include <stdio.h>

struct Point {
	int x;
	int y;
};

int main() {
	struct Point point[2];

	for(int i = 0; i < 2; i++) {
		printf("점의 좌표는?(x, y) ");
		scanf("%d %d", &point[i].x, &point[i].y);
	}

	int avg_x = 0, avg_y = 0;

	for(int i = 0; i < 2; i++) {
		avg_x += point[i].x;
		avg_y += point[i].y;
	}
	printf("중심점의 위치 = (%.1f, %.1f)", (float)avg_x / 2, (float)avg_y / 2);
	return 0;
}