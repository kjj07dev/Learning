<<<<<<< HEAD
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
=======
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
>>>>>>> 46ce7bb5e1dcb53df1ed9c051a76b523acb7b30c
}