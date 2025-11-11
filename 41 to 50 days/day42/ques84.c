//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/

#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int l;
    printf("Enter the string :");
    fgets(a,sizeof(a),stdin);
    l=strlen(a);
    for(int i=0;i<l-1;i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
        a[i]=a[i]-32;
        
        }
    printf("%c",a[i]);

    }

    return 0;
}