#include <stdio.h>

int main() {
	int odd = 0, even = 0;

	for(int i = 0; i < 10; i++) {
		int n;

		scanf("%d", &n);

		if(n % 2) {
			odd++;
		}
		else even++;
	}

	printf("even : %d\nodd : %d", even, odd);
	return 0;
}