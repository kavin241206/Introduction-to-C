#include <stdio.h>
void main ()
{
    int a,b,c;
    printf("enter two values");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("value of a = %d\n value of b = %d",a,b);

}
