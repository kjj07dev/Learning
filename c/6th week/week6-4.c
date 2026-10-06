#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    for(int i = 1; i <= 2*n; i++) {
        if(i <= n) {
            for(int j = 1; j <= i; j++) {
                printf("*");
            }
        }
        else {
            for(int j = 2*n - i + 1; j >= 1; j--) {
                printf("*");
            }
        }
        printf("\n");
    }
}