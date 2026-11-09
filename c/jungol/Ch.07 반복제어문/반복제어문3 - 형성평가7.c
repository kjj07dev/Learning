#include <stdio.h>

int main() {
	char c = 'A';
	int cnt = 0, n;

	scanf("%d", &n);

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n - i; j++) {
			printf("%c ", c);
			if(c == 'Z') c = 'A';
			else c++;
		}
		for(int j = 0; j < i; j++) {
			printf("%d ", cnt);
			cnt++;
		}
		printf("\n");
	}
}