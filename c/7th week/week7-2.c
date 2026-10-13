#include <stdio.h>

int main() {
    int m_int = 15;
    double m_double = 3.14;
    char m_char = 'M';
    void *mp;

    mp = &m_int;
    printf("m_int %d\n", *(int*)mp);
    mp = &m_double;
    printf("m_int %.1f\n", *(double*)mp);
    mp = &m_char;
    printf("m_int %c\n", *(char*)mp);
}