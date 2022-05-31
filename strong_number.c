#include<stdio.h>  //krishnamurti_number.
int main()
{
    int i,j,n,rev,sum=0,fac=1;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        rev=i%10;
        for (j=1;j<=rev;j++)
        {
            fac=fac*j;
        }
        sum=sum+fac;
        fac=1;
    }
    if(n==sum)
        printf("it is a strong number.");
    else
        printf("error");
}