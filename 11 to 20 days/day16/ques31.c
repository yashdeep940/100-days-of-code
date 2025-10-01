//Q31: Write a program to take a number as input and print its equivalent binary representation.
/*
Sample Test Cases:
Input 1:
10
Output 1:
1010
Input 2:
7
Output 2:
111
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 31; i >= 0; i--)
        if (n >> i & 1) {
            for (; i >= 0; i--)
                printf("%d", n >> i & 1);
            break;
        }
    printf("\n");
    return 0;
}