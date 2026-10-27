#include <stdio.h>

int main() {
	int h, w;

	scanf("%d %d", &h, &w);

	printf("%d\n", (w+100-h));
	if(w+100-h > 0) {
		printf("Obesity");
	}	
	return 0;
}
