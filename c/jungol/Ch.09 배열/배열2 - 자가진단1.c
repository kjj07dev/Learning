#include <stdio.h>

int main() {
    int count[26] = {0};
    char ch;

    while (1) {
        scanf(" %c", &ch);


        if (ch >= 'A' && ch <= 'Z') {
            count[ch - 'A']++;
        } else {
            break;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c : %d\n", 'A' + i, count[i]);
        }
    }

    return 0;
}
