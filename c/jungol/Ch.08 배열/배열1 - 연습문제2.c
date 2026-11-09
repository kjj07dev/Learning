#include <stdio.h>

int main() {
	char arr[28] = {}, c = 'Z';

	for(int i = 0; i < 26; i++) {
		arr[i] = c;
		if(c == 'A') {
			c == 'Z';
		}
		else c--;
	}

	for(int i = 0; i < 26; i++) {
		printf("%c ", arr[i]);
	}
	return 0;
}