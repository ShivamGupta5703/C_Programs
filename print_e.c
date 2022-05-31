#include<stdio.h>
int main()
{
    int i,j,a,l;
    printf("enter the value of a:");
    scanf("%d",&a);
    if(a%2!=0)
    {
        l=a+1;
    }
    else
    {
        l=a;
    }
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++) 
        {
            if(i==1||j==1||i==a||i==(l/2))
                {
                    printf("*");
                }
            else
                {
                    printf(" ");
                }
        }
        printf("\n");
    }
    printf("\n");
}