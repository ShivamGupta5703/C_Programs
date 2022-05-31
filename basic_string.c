//Length ,copy,comparing,concatenate,lower_to_upper_to_lower,toggle_case_of_each_character strings.
#include<stdio.h> 
#include<string.h>
int main()
{
    char a[100],b[100],c[100],d[100]; 
    printf("enter the string:");
    scanf("%s", a);

    //length of string.
    printf("length with function:%ld", strlen(a));   //with function.
    printf("\n"); 

    long int length=0;                              //without function.
    for (int i = 0;a[i]!='\0'; i++)
    {
        length++;
    }
    printf("length:%ld", length);   
    printf("\n");
  
    //copy string.
    printf("copying string to b:%s\n", strcpy(b, a));  //with function.
    printf("\n");

    for (int j=0;a[j]!='\0'; j++)                      //without function
    c[j]=a[j];
    printf("copy to c: %s",c);
    printf("\n");

    //comparision.
    if(strcmp(a,b)==0)                    //with function.
        printf("entered strings are equal.");
    else
        printf("entered strings are not equal.");
    printf("\n");
    int h;
    for(h=0;a==b&&a=='\0';h++)          //without function.  //a==b&&a=='\0' means a[i]!='\0'&&b[i]!='\0'
    if(a>b)
    printf("a is greater than b");
    else if (a<b)
    printf("b is greater than a");
    else
    printf("both are equal");
    printf("comparision result+%d",a[h]-b[h]);
    printf("\n");
    
    //concatenation.
    strcat(a,b);                                      //with function.
    printf("concatinating string:%s", a); 
    printf("\n");

    int i;
    for (i=0;c[i]!='\0';i++);                    //without function.
    for (int j=0;b[j]!='\0'; j++) 
    {
        c[i++]=b[j];
    }   
    c[i]='\0';
    printf("After the Concatenate = %s", c);
    printf("\n"); 
    
    //lower_to_upper_to_lower.
    printf("a lower_to_upper:%s", strupr(a));
    printf("\n");
    printf("a upper_to_lower:%s", strlwr(a));
    printf("\n");

    //toggle_case_of_each_character. 
    printf("enter the string:");
    scanf("%s",d); 
    for(int i=0;d[i]!= '\0';i++)
    {
        if(d[i]>= 'a' && d[i]<='z')
        { 
            d[i]=d[i]-32;
        } 
        else if(d[i]>= 'A' &&d[i]<= 'Z') 
        {
            d[i]=d[i]+32;
        }
    }
    printf("toggled string:%s",d);
}
