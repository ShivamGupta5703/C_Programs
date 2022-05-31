#include<stdio.h> 
#include<string.h>
int main()
{
    char a[100];
    int alpha=0, number=0, special_character=0; 
    printf("enter the string:");
    gets(a);
    printf("reversed string:%s\n",strrev(a));       //with function.

    int length_=strlen(a);                          //without function. 
    printf("reversed string:");
    for(int i=length_-1;i>=0;i--)
    printf("%c",a[i]);
} 