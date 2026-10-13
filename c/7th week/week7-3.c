#include <stdio.h>
#define MAX_SIZE 10

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int *TStart, *TEnd;


    printf("Array forward : ");
    for(TStart = arr, TEnd = arr + MAX_SIZE; TStart < TEnd; TStart++)
        printf("%d ", *TStart);
    
    printf("\n");

    printf("Array backword : ");
    for(TStart = TEnd - 1; TStart >= arr; TStart--)
        printf("%d ", *TStart);

    return 0;
}