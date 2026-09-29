#include <stdio.h>

int main() {
    int diceCount[7] = {0}; //Out of bouns 방지용
    
    for(int i = 0; i < 10; i++) {
        int t;

        scanf("%d", &t);

        diceCount[t]++;
    }

    for(int i = 1; i <= 6; i++) {
        printf("%d : %d\n", i, diceCount[i]);
    }
}