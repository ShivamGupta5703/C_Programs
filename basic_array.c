//wap to print all elements,sum of elements,even-odd index,even-odd elements of array.
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
    for(i=0;i<n;i++) 
    sum=sum+a[i];
    printf("\nsum of elements of array: %d", sum);
    printf("\nelements at even index are:");
    for(i=0;i<n;i++)
    { 
        if(i%2==0) 
        printf("%d\t",a[i]);
    }
    printf("\nelements at odd index are: ");    
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        printf("%d\t", a[i]);
    }
    printf("\neven elements of array are:");
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        printf("%d\t",a[i]);
    }
    printf("\nodd elements of array are:"); 
    for(i=0;i<n;i++) 
    {
        if(a[i]%2!=0) 
        printf("%d\t", a[i]);
    }
    printf("\n");
}   