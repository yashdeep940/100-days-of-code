//Q81: Count characters in a string without using built-in length functions.
/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5
Input 2:
Output 2:
1
*/

#include<stdio.h>

int main()
{

char a[100];
int length=0;
printf("Enter the string:");
fgets(a,sizeof(a),stdin);
while (a[length]!='\0')
{    
    if(a[length]=='\n')
    {
        break;
    }
    length++;
}
printf("%d",length);


    return 0;
}