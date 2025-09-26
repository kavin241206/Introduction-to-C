#include<stdio.h>
void main()
{
    char name[50];
    printf("enter the name\n");
    //scanf("%s", name);
    //printf("name is %s", name);
    gets(name);
    printf("name is %s", name);
}
