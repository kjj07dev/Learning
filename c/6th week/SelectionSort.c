#include <stdio.h>

int main() {
    int arr[5] = {4, 1, 7, 2, 5};
    
    for(int i = 0; i < 5; i++) {
        int min = arr[i], pos = i+1;
        for(int j = i + 1; j < 5; j++) {
            if(min > arr[j]) {
                min = arr[j];
                pos = j;
            }
        }

        int t = arr[i];
        arr[i] = min;
        arr[pos] = t;
    }

    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
}