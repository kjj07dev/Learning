#include <stdio.h>

int main() {
	int cnt = 1;
	char c = 'a';

	for(int i = 1; i <= 4; i++) {
		for(int j = 0; j < i; j++) {
			printf("%c ", c);
			c++;
		}
		for(int j = 0; j < 5 - i; j++) {
			printf("%d ", cnt);
			cnt++;
		}
		printf("\n");
	}
	return 0;
}