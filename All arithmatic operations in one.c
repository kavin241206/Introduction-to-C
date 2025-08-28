#include <stdio.h>
int main ()
{
    float a, b;
    printf("enter the two numbers");
    scanf("%f%f", &a, &b);
    printf("the sum is %f\n", a+b);
    printf("the difference is %f\n", a-b);
    printf("the product is %f\n", a*b);
    printf("the division is %.2f", a/b);
    return 0;
}
