#include<stdio.h>
int main()
{
    int i,n,rev,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        rev=i%10;
        sum=sum+(rev*rev*rev);
    }
    printf("%d\n",sum);
    if(n==sum)
        printf("this is an armstrong number");
    else
        printf("error");
}  