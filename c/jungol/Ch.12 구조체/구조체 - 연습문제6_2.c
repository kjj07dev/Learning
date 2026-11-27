#include <stdio.h>

struct Student {
    char name[50];
    int height;
    double kg;
};

int main() {
    struct Student s[5];

    for (int i = 0; i < 5; i++) {
        scanf("%s %d %lf", s[i].name, &s[i].height, &s[i].kg);
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (s[i].height > s[j].height) {
                struct Student t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%s %d %.1lf\n", s[i].name, s[i].height, s[i].kg);
    }

    return 0;
}
