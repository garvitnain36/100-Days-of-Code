#include <stdio.h>
int main()
{
    int a, b,  sum = a+b, product = a*b, difference = a-b, quotient = a/b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Sum of %d and %d is %d\n", a, b, sum);
    printf("Product of %d and %d is %d\n", a, b, product);
    printf("Difference of %d and %d is %d\n", a, b, difference);
    printf("Quotient of %d and %d is %d\n", a,  b, quotient);
    return 0;
}