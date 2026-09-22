#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int answer;
    int num, count = 0;

    srand(time(NULL));
    
    answer = rand() % 100 + 1;

    printf("1부터 100까지 숫자중에 맞춰보세요!\n");
    while(1) {
        printf("정답 입력: ");
        scanf("%d", &num);
        count++;

        if(answer < num) {
            printf("더 작은 수 입니다..\n");
        }
        else if(answer > num) {
            printf("더 큰 수 입니다..\n");
        }
        else {
            printf("정답입니다.\n 시도 횟수: %d", count);
            break;
        }
    }
}