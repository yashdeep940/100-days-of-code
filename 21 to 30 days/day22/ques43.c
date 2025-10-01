//Q43: Write a program to check if a number is a strong number.
/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number
Input 2:
123
Output 2:
Not strong number
*/

#include <stdio.h>

int main() {
    int num, temp, sum = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        int d = temp % 10;
        int f = 1;
        for (int i = 1; i <= d; i++)
            f *= i;
        sum += f;
        temp /= 10;
    }
    if (sum == num)
        printf("Strong number\n");
    else
        printf("Not strong number\n");
    return 0;
}