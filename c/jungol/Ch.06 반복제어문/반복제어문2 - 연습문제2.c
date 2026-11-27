#include <stdio.h>

int main() {
	char c = 'A';

	while(1) {
		printf("%c", c);
		c++;

		if(c == 'Z'+1) {
			break;
		}
	}
	return 0;
}