#include <stdio.h>

int main() {
    int a, b, c, mult, cnt[11] = {0};

    scanf("%d %d %d", &a, &b, &c);

    mult = a*b*c;

    while(mult > 0) {
        cnt[mult%10]++;
        mult /= 10;
    }

    for(int i = 0; i < 10 ; i++) {
        printf("%d\n", cnt[i]);
    }
}