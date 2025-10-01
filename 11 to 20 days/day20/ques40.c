//Q40: Write a program to find the 1’s complement of a binary number and print it.
/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101
Input 2:
1111
Output 2:
0000
*/

#include <stdio.h>

int main() {
    int n, reverse = 0;
printf("Enter number: ");
    scanf("%d", &n);
    while (n > 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    while (reverse > 0) {
        int d = reverse % 10;
        printf("%d", d == 0 ? 1 : 0);
        reverse /= 10;
    }
    printf("\n");
    return 0;
}