//right rotate.
#include<stdio.h> 
int main()
{
    int n,k;
    printf("enter the value of n:"); 
    scanf("%d",&n);
    int a[n],i,j;
    printf("enter the %d elements of array:",n); 
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("elements of array are:");
    for(i=0;i<n;i++) 
    printf("%d\t", a[i]);
    printf("\n");//right rotate.
    printf("enter the number of  right rotaions:");
    scanf("%d",&k);
    for(j=1;j<=k;j++)
    {
        int temp=a[n-1];
        for(i=n-1;i>=1;i--)
        {
            a[i]=a[i-1];
        }
        a[i]=temp;
    }
    printf("right rotated array:");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}