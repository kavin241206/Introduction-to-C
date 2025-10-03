#include<stdio.h>
void main()
{
    char str[20];
    char rev[20];
    int i, j, k, flag = 0;
    printf("enter the string\n");
    scanf("%s", &str);
    for(i=0; str[i]!='\0'; i ++);
    printf("length is %d\n", i);
    for(j=0, k=i-1; j< i/2; j++, k--)
    {
        if(str[j] == str[k])
        {

        }
        else
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("\n not a palindrome");
    }
    else
    {
      printf("palindrome");
    }
}
