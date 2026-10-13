#include <stdio.h>

void sort(int *arr);

int main() {
    int arr[10] = {1, 6, 2, 8, 5, 9, 4, 3, 10, 7};
    
    sort(&arr); 

    for(int i = 0; i < 9; i++) {
        printf("%d ", arr[i]);
    }
}

void sort(int *arr) {
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 9; j++) {
            if(arr[j] > arr[j+1]) {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}