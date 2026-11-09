#include <stdio.h>

int main() {
	int arr[11] = {};

	while(1) {
		int t;
		scanf("%d", &t);

		if(t == 0) break;

		arr[t/10]++;
	}

	for(int i = 10; i >= 0; i--) {
		if(arr[i] > 0) {
			printf("%d : %d person\n", i*10, arr[i]);
		}
	}

	return 0;
}