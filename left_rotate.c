//left rotate.
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
    printf("\n");

    //left rotate.
    printf("enter the number of  left rotaions:");
    scanf("%d",&k);
    for(j=1;j<=k;j++)
    {
        int temp=a[0];
        for(i=0;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        a[i]=temp;
    }
    printf("left rotated array:");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n");
}