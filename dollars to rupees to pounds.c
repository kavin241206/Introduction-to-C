#include <stdio.h>
int main ()
{
    float d, rs, p;
    printf("enter dollars");
    scanf("%f", &d);
    rs = d*48;
    p = rs/70;
    printf("pounds = %.2f", p);
    return 0;
}
