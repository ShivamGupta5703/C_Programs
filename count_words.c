#include<stdio.h> 
#include<string.h>
int main()
{
    char a[100];
    int word=1;
    printf("enter the string:");
    gets(a);
    for(int i=0;a[i]!='\0';i++)
    {
        //check whether the current character is white space or new line or tab character.
        if(a[i]==' '||a[i]=='\n'||a[i]=='\t')
        word++;
    }
    printf("no. of words:%d",word);
}