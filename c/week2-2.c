#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;
    int result;

    result = a * b + (++a);
    printf("결과 = %d\n", result); // a = 6 이후 6 * 3 + 6  

    int c = 6;
    int d = 4;

    result = c * d + (c--);
    printf("결과 = %d", result); //6 * 4 + 6 이후 c = 5

    return  0;
}