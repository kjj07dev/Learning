#include <stdio.h>

int main() {
	int min = 1001;

	for(int i = 0; i < 10; i++) {
		int t = 0;

		scanf("%d", &t);

		if(t < min) min = t;
	}

	printf("%d", min);
	
	return 0;
}