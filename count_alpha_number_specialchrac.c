#include<stdio.h> 
#include<string.h>
int main()
{
    char a[100];
    int alpha=0, number=0, special_character=0; 
    printf("enter the string:");
    scanf("%s", a);
    for(int i=0;a[i];i++)
    {
        if(a[i]>= 65&& a[i]<=90|| a[i]>=97&& a[i]<=122)
        {
            alpha++;
        }
        else if( a[i] >=48&& a[i]<=57) 
        {
            number++;
        }
        else
        special_character++;
    }
    printf("%d\n",alpha);
    printf("%d\n",number);
    printf("%d",special_character);
}