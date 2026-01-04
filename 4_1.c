#include <stdio.h>

int main(void) {
    int x, y, z, sum;
    printf("3개의 정수 입력: ");
    scanf("%d %d %d", &x, &y, &z);
    sum = 0;
    sum += x;
    sum += y;
    sum += z;
    printf("3개 정수의 합은 %d\n", sum);
    return 0;
}