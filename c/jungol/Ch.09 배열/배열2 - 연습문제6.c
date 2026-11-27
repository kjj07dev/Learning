#include <stdio.h>

int main() {
    int arr[3][3] = {};

    for(int i = 0; i < 3; i++) {
        printf("%d번째 학생의 점수 ", i+1);
        scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
    }

    printf("     국어 영어 수학 총점\n");
    for(int i = 0; i < 3; i++) {
        printf(" %d번 %3d %3d %3d %3d\n", i+1, arr[i][0], arr[i][1], arr[i][2], arr[i][0] + arr[i][1] + arr[i][2]);
    }
    
    printf("합계 %3d %3d %3d ", arr[0][0] + arr[1][0] + arr[2][0], arr[0][1] + arr[1][1] + arr[2][1], arr[0][2] + arr[1][2] + arr[2][2]);
    
    printf("%3d\n", arr[0][0] + arr[1][0] + arr[2][0] + arr[0][1] + arr[1][1] + arr[2][1] + arr[0][2] + arr[1][2] + arr[2][2]);

    return 0;
}
