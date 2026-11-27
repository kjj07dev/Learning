<<<<<<< HEAD
#include <stdio.h>

int main() {
    int y;

    scanf("%d", &y);

    if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
        printf("윤년");
    } else {
        printf("평년");
    }

    return 0;
=======
#include <stdio.h>

int main() {
    int y;

    scanf("%d", &y);

    if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
        printf("윤년");
    } else {
        printf("평년");
    }

    return 0;
>>>>>>> 46ce7bb5e1dcb53df1ed9c051a76b523acb7b30c
}