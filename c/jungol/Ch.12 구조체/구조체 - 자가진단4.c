#include <stdio.h>

struct Point {
	int x;
	int y;
};

int main() {
	struct Point point[3];

	for(int i = 0; i < 3; i++) {
		scanf("%d %d", &point[i].x, &point[i].y);
	}

	int avg_x = 0, avg_y = 0;

	for(int i = 0; i < 3; i++) {
		avg_x += point[i].x;
		avg_y += point[i].y;
	}

	printf("(%.1f, %.1f)", (float)avg_x / 3, (float)avg_y / 3);
		
	return 0;
}