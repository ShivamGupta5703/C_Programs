#include<stdio.h>
int main()
{
    int a,n;
    printf("enter the number and divisibility test number:");
    scanf("%d%d",&a,&n);
    if(a%n==0)
        printf("%d is divisible by %d.",a,n);
    else
    printf("%d is not divisible by %d.",a,n);
}