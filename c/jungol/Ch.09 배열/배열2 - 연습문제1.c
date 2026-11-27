2#include <stdio.h>

int main() {
	int arr[11] = {};

	while(1) {
		int t;
		scanf("%d", &t);

		if(t > 10 || t < 1) break;

		arr[t]++;
	}

	for(int i = 1; i <= 10; i++) {
		if(arr[i] == 0) continue;

		printf("%d : %d개\n", i, arr[i]);
	}
	return 0;
}