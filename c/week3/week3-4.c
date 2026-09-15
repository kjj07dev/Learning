#include <stdio.h>

int main() {
    int n, m, sum = 0, i = 1;

    scanf("%d %d", &n, &m);

    while(m > 0) {
        sum += m % 10 * n *i;
        printf("%d\n", m % 10 * n);
        m /= 10;
        i *= 10;
    }

    printf("%d\n", sum);
}