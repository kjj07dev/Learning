#include <stdio.h>

int main() {
	int arr[100] = {}, i = 0;

	while(1) {
		int t;
		
		scanf("%d", &t);

		if(t == -1) break;

		arr[i] = t;

		i++;
	}

	int st = (i - 3 < 0) ? 0 : i - 3;

	for(int j = st; j < i; j++) {
		printf("%d ", arr[j]);
	}
	
	return 0;
}
