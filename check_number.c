#include<stdio.h>
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    if(a>0)
        printf("%d is poitive.",a);
    else if(a<0)
        printf("%d is negative.",a);
    else
    printf("%d is zero.",a);
}