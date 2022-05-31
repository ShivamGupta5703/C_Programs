#include<stdio.h>
int main()
{
    int i,n,a=1,b=0,c=0;
    printf("enter the number of fibonacci number you want:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
       c=a+b;
       a=b;
       printf("%d \n",a);
       b=c;   
    }
}