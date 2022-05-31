#include<stdio.h>
int main()
{
    int i,n,rev,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        rev=i%10;
        sum=sum*10+rev;
    }
    printf("%d\n",sum);
    if(n==sum)
        printf("this is a pallindrome number");
    else
        printf("error");
}