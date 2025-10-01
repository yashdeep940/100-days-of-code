//Q30: Write a program to reverse a given number.
/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321
Input 2:
100
Output 2:
1
*/

#include <stdio.h>

int main() {
    int n, reverse = 0;
    printf ("Enter number: ");
    scanf("%d", &n);
    while (n > 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    printf("Reverse number: %d\n", reverse);
    return 0;
}