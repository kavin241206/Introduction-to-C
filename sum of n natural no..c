#include <stdio.h>
void main()
{
    int n = 1,sum=0;
    do {
        printf("%d", n);
        sum=sum+n;
        n++;
       } while (n <=10);

       printf("the sum is %d", sum);
}

