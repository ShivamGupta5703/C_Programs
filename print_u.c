#include<stdio.h>
int main()
{
    int i,j,a;
    printf("enter the value of a:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++) 
        {
            if(j==1||i==a||j==a)
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
}