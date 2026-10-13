#include <stdio.h>

int main() {
    int n = 67;
    int *p = &n;

    printf("%d\n", (*p)++); // 67  -> 68
    printf("%d\n", (*p)+1); // 68 -> 68
    printf("%d\n", (*p)+=1); // 68 -> 69
    printf("%d\n", *p+=1); // 69 -> 70
    printf("%d\n", *p=*p+1); // 70 -> 71
    printf("%d\n", ++*p); //71 -> 72
    printf("%d\n", ++(*p)); //  72 -> 73

    printf("Ãâ·Â: *p = %d, n = %d", *p, n);
}