#include <stdio.h>

int main() {
	int a = 0, b = 0;

	for(int i = 0; i < 10; i++) {
		int n;
		scanf("%d", &n);

		if(n%3 == 0) {
			a++;
		}
		if(n%5==0) {
			b++;
		}
	}
	printf("Multiples of 3 : %d\nMultiples of 5 : %d", a, b);
	return 0;
}