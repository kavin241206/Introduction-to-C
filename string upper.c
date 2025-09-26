#include<stdio.h>
void main()
{
    char str[50];
    int i;
    printf("enter the string\n");
    gets(str);
     while(str[i] !='\0')
    {
        if(str[i]>=97 && str[i]<=122)
        {
            printf("%c", str[i]-32);
        }
        else if(str[i] >=65 && str[i]<=90)
        {
            printf("%c", str[i]+32);
        }
        else
        {
            printf("%c", str[i]);
        }
        i++;
    }
}


