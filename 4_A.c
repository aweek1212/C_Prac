#include <stdio.h>

int main(void) {
    float radius, area;
    printf("radius = ");
    scanf("%f", &radius);

    area = 3.141592 * radius * radius;
    printf("area = %.2f\n", area);

    return 0;
}