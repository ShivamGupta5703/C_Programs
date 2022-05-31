#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    switch(a!=0)
    {
        case 0:
        printf("Entered number is zero.");
        break;
        case 1:
        switch(a<0)
        {
            case 0:
            printf("Entered number is positive."); 
            break;

            case 1:
            printf("Entered number is negative.");
            break;
        }
    break; 
    }
    return 0;
}