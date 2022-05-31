#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,root1,root2,imaginary,discriminant;        // ax^2+bx+c=0
    printf("Enter the value of a,b,c for quadratic equation ax^2+bx+c=0:");
    scanf("%f%f%f",&a,&b,&c);
    discriminant = (pow(b,2)-(4*a*c));
    switch(discriminant>0)
    {
        case 0:
        switch(discriminant<0)
        {
            case 0:
            root1=root2= -b/(2*a);
            printf("equal and real roots are: %.2f %.2f", root1, root2); 
            break;

            case 1:
            root1=root2= -b/(2*a); imaginary = (-b+sqrt(discriminant))/2*a;
            printf("imaginary roots are: %.2f + 1%.2f, %.2f-1%.2f",root1, imaginary, root2, imaginary);
            break;
        }
    break; 
    case 1:
        root1= (-b+sqrt(discriminant))/2*a ; 
        root2= (-b-sqrt(discriminant))/2*a ;   
        printf("real and distinct roots are: %.2f %.2f",root1, root2);
        break;
    }
    return 0;
}