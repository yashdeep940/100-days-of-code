//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

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
        printf("%c\n",a[i]);
    }

    return 0;
}