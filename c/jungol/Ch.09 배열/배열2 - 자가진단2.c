#include <stdio.h>

int main() {
    int count[10] = {0};
    int t;

    while (1) {
        scanf("%d", &t);

        if (t == 0) break;

        count[t/10]++;
    }

    for (int i = 0; i <= 9; i++) {
        if (count[i] > 0) {
            printf("%d : %d\n", i, count[i]);
        }
    }

    return 0;
}
