#include <stdio.h>
int main()
{
    float w, x, y, z;
    float net_salary = w ;
    float gross_salary = x;
    float deduction = y;
    float allowance = z;
    printf("enter the value of gross salary");
    scanf("%f", &x);
    z = 0.1*x;
    y = 0.03*x;
    w = x + z - y;
    printf("the net salary is %f", w);
    return 0;


}
