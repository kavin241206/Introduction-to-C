#include<stdio.h>
void main()
{
    char name[50];
    printf("enter the name\n");
    gets(name);
    int i=0;
    while(name[i]!='\0')
    {
        i++;
    }
    printf("string length is %d\n", i);
}
