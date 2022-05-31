#include<stdio.h> 
int main()
{
    int n, sum=0,z;
    printf("enter the value of n:"); 
    scanf("%d",&n);
    int a[n],i;
    printf("enter the %d elements of array:",n); 
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("elements of array are:");
    for(i=0;i<n;i++) 
    printf("%d\t", a[i]);
    printf("\n");
    for(i=0;i<=n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("arary in ascending order:");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}