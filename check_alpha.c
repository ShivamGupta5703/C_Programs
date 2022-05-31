#include<stdio.h>
#include<ctype.h>
int main()
{
    char c;
    printf("enter the character:");
    scanf("%c",&c);
    if(isalpha(c)==0)
        printf("%c is not an alphabet.",c);
    else
    printf("%c is a alphabet.",c);
}