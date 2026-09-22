#include <stdio.h>

int solved(int n);

int main() {
    int n;

    scanf("%d", &n);

    solved(n);
}

int solved(int n) {
    if(n) {
        solved(n-1);
    }
    else return 0;
    printf("%d\n", n);
}