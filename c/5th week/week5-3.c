<<<<<<< HEAD
#include <stdio.h>

int main() {
    int score[11] = {0};

    while(1) {
        int t;
        scanf("%d", &t);

        if(t == 0) {
            break;
        }
        score[t/10]++;
    }

    for(int i = 10; i > 0; i--) {
        if(score[i] != 0) {
            printf("%d : %d person\n", i*10, score[i]);
        }
    }

    return 0;
=======
#include <stdio.h>

int main() {
    int score[11] = {0};

    while(1) {
        int t;
        scanf("%d", &t);

        if(t == 0) {
            break;
        }
        score[t/10]++;
    }

    for(int i = 10; i > 0; i--) {
        if(score[i] != 0) {
            printf("%d : %d person\n", i*10, score[i]);
        }
    }

    return 0;
>>>>>>> 46ce7bb5e1dcb53df1ed9c051a76b523acb7b30c
}