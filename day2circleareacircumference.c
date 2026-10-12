#include <stdio.h>
int main()
{
    int  radius;
    float area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    printf("Area of the circle is %.2f\n", area);
    printf("Circumference of the circle is %.2f\n", circumference);
    return 0;   
}