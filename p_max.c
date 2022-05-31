#include <stdio.h>
void main()
{
 int fno,sno,*ptr1=&fno,*ptr2=&sno;
   printf("Pointer : Find the maximum number between two numbers :\n"); 
   printf(" Input the first number : ");
   scanf("%d", ptr1);
   printf(" Input the second  number : ");
   scanf("%d", ptr2); 
 if(*ptr1>*ptr2)
 {
  printf("\n\n %d is the maximum number.\n",*ptr1);
 }
 else
 {
  printf("\n\n %d is the maximum number.\n",*ptr2);
 }
}