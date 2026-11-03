#include <stdio.h>
#include <string.c>

int main() {
    char str1[20] = "back";
    char str2[20] = "Space";
    char str3[20];

    char ch = 'p';
    int n = 3;

    int len = strlen(str1);
    printf("str1의 길이 %d\n", len);

    /*
    * strcpy(char *dest, const char *src) -> dset = src;
    ! 버퍼 오버런 주의
    ! 메모리 중첩 주의
    */
    strcpy(str3, str1);
    printf("str1을 str3에 복사: %s\n", str3);

    strncpy(str3, str2, n);
    str3[n] ='\0';
    printf("str2의 첫 %d 문자를 str3에 복사: %s\n", n. str3);

    /*
    * int strcmp(const char *lhs, const char *rhs);
    ! 대소문자 구분
    ! 널 포인터 검사
    */
    printf("str과 str2 비교: %d\n", strcmp(str1, str2));
}