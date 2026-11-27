#include <stdio.h>

int main() {
	int arr[100], i = 0;
	while(1) {
		scanf("%d", &arr[i]);
		if(arr[i] == 0) break;
		i++;
	}

	printf("%d\n", i);

	for(int j = 0; j < i; j++) {
		if(arr[j]%2) printf("%d ", arr[j]*2);
		else printf("%d ", arr[j] / 2);
	}
	return 0;
}