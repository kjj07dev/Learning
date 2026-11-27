<<<<<<< HEAD
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
=======
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
>>>>>>> 46ce7bb5e1dcb53df1ed9c051a76b523acb7b30c
}