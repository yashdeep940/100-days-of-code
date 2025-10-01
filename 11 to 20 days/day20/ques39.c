//Q39: Write a program to find the product of odd digits of a number.
/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)
Input 2:
2468
Output 2:
1 (no odd digits, assume 1)
*/

#include <stdio.h>

int main() {
    int num, product = 1;
    printf("Enter number: ");
    scanf("%d", &num);
    while (num) {
        int d = num % 10;
        if (d % 2) product *= d;
        num /= 10;
    }
    printf("%d\n", product);
    return 0;
}