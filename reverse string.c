#include<stdio.h>
void main()
{
    char str[20];
    char rev[20];
    int i, j, k;
    printf("enter the string\n");
    scanf("%s", &str);
    for(i=0; str[i]!='\0'; i ++);
    printf("length is %s = %d",str, i);
    for(j=0, k=i-1; k>=0; j++, k--)
    {
        rev[j]= str[k];
        printf("%c = %s\n", rev[j], rev);
    }
    //rev[j]= '\0';
    printf("\n %s = string rev %s", str, rev);


}
