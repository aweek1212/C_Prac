#include <stdio.h>

int main(void) {
    double num1, num2, num3;
    double sum, avg;

    printf("input: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    avg = sum / 3.0;

    printf("sum = %.2lf\n", sum);
    printf("avg = %.2lf\n", avg);
    return 0;
}