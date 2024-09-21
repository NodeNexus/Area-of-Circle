#include <stdio.h>
int main() {
    float radius, area, circ;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = 3.1415*radius*radius;
    circ = 2*3.1415*radius;

    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circ);

    return 0;
}
