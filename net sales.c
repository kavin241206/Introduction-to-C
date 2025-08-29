#include<stdio.h>
int main()
{
    float net, gross;
    printf("enter the gross sales value");
    scanf("%f", &gross);
    //discount = 10% of gross value;
    net = gross - 0.1*gross;
    printf("the net value of sales is %f", net);
    return 0;
}
