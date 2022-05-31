#include<stdio.h> 
#include<string.h>
int main()
{
    char a[100];
    int vowel=0, consonant=0;
    printf("enter the string:");
    scanf("%s", a);
    for(int i=0;a[i];i++)
    {
        if(a[i]>= 65&& a[i]<=90|| a[i]>=97&& a[i]<=122)
        {
            if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
            {
               vowel++;
            }
            else
            {
                consonant++;
            }
        }
    }
    printf("%d\n",vowel);
    printf("%d",consonant);
}