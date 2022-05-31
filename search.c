 //search elements in array.
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
    printf("Enter element to search:");
    scanf("%d",&z);
    int flag=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==z)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("%d is found at position %d.",z,i+1);
        else
        printf("%d is not found in the array.");
}
   