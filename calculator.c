#include<stdio.h>
int main()
{
    long int a,b,d;
    char c;
    printf("enter the operation:");
    scanf("%c",&c);
    printf("enter two numbers:");
    scanf("%ld%ld",&a,&b);
    switch(c)
    {
        case ('+'): d=a+b ;
            printf("%ld",d);
            break;
        case ('-'): d=a-b ;
            printf("%ld",d);
            break;
        case ('*'):  d=a*b ;
            printf("%ld",d);
            break;
        case ('/'): d=a/b ;
            printf("%ld",d);
            break;
    }
    return 0;
}