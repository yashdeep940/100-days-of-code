//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

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
        if(a[i]==' ')
        {
            a[i]='-';
        }
         printf("%c",a[i]);
    }
    return 0;
}