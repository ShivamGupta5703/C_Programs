//sort even and odd elements in different arrays.
#include<stdio.h> 
int main()
{
    int n;
    printf("enter the value of n:"); 
    scanf("%d",&n);
    int a[n],even[n],odd[n],i,m=0,p=0;
    printf("enter the %d elements of array:",n); 
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("elements of array are:");
    for(i=0;i<n;i++) 
    printf("%d\t", a[i]);
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even[m]=a[i];
            m++;
        }
        else
        {
            odd[p]=a[i];
            p++;
        }
    }
    printf("even elements of array are:");
    for(i=0;i<m;i++) 
    printf("%d\t", even[i]);
    printf("\n");
    printf("odd elements of array are:");
    for(i=0;i<p;i++) 
    printf("%d\t", odd[i]);
}