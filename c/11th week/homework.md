## 11주차 과제

### 1. 다음 C언어 코드의 결과로 올바른 것은?
```
#include <stdio.h>

int main(void) {
    char str[] = "HELLO";
    char *p = str;

    p += 2;
    printf("%c %c\n", *p, *(p + 1));

    return 0;
}
```
① H E

② E L

③ L L

④ L O

### 2. 다음과 같이 구조가 선언되어 있다.
```
struct Data {
    char a;
    int b;
    char c;
};
```
일반적인 32비트 또는 64비트 환경에서 ```sizeof(struct Data)```의 결과는?

① 4

② 8

③ 12

④ 16

### 3. 다음과 같이 구조가 선언되어 있다.
```
union Data {
    char a;
    int b;
    double c;
};
```
일반적인 32비트 또는 64비트 환경에서 ```sizeof(union Data)```의 결과는?

① 8

② 10

③ 11

④ 13

### 4. 다음 C언어 코드의 실행 결과로 올바른 것은?

```
#include <stdio.h>

struct Student {
    int id;
    int score;
};

int main(void) {
    struct Student s = {2025, 90};
    struct Student *p = &s;

    p->score = 100;

    printf("%d %d\n", p->id, s.score);

    return 0;
}
```
① 2025 90

② 2025 100

③ 0 100

④ 컴파일 오류가 발생한다.

### 5. 다음 C언어 코드의 실행 결과로 올바른 것은?
```
#include <stdio.h>
#include <string.h>

int main(void) {
    char *p = "hello";
    char str[10];

    strcpy(str, p);

    char *q = str;
    q[3] = 'A';

    printf("%s\n", q);

    return 0;
}
```

① hello

② helAo

③ 실행 시 정의되지 않은 동작이 발생한다.

④ 컴파일 오류가 발생한다.

## 정답
1. ③
2. ③
3. ①
4. ②
5. ②