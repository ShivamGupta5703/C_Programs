#include<stdio.h>
int main()
{
  float num1, num2, max;
  printf("Enter two numbers: ");
  scanf("%f %f", &num1, &num2);
  if(num1>num2)
  {
    max = num1;
  }
  else
  {
    max = num2;
  }  
  printf("Maximum of %.2f and %.2f = %.2f", num1, num2, max);
  return 0;
}