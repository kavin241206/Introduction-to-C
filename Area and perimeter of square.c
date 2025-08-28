#include <stdio.h>
int main()
{
    int L;
    int area;
    int perimeter;
    area = L*L;
    perimeter = 4*L;
    printf("enter the length");
    scanf("%d", &L);
    printf("the area is %d\n", L*L);
    printf("the perimeter is %d", 4*L);
    return 0;
}
