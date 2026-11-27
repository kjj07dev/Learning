#include <stdio.h>

int main() {
	int arr[100] = {}, i = 0;

	while(1) {
		int t;
		scanf("%d", &t);

		if(t==0) break;
		else arr[i] = t;
		i++;
	}

	for(int j = 1; j < i; j += 2) {
		printf("%d ", arr[j]);
	}
	return 0;
}