#include <stdio.h>

struct Person {
    char name[50];
    int age;
}

int main() {
    struct Person people[5] =
    
    for(int i = 0; i < 5; i++) {
        printf("Person %d:\n", i+1);

        printf("Enter name: ");
        scanf("%49s", people[i].name);

        printf("Enter age: ");
        scanf("%d", &people[i].age);
    }

    printf("\nPeople List:\n");
    for(int i = 0; i < 5; i++) {
        printf("Person %d: Name = %s, Age = %d\n", i+1, people[i].name, people[i].age);
    }
}