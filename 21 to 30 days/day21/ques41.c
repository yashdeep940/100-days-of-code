//Q41: Write a program to swap the first and last digit of a number.
/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231
Input 2:
1001
Output 2:
1001
*/

#include <stdio.h>

int main() {
    int num, first, last, digits = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    last = temp % 10;

    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    first = temp;
    if (first == last) {
        printf("Swapped number: %d\n", num);
        return 0;
    }
    int pow10 = 1;
    for (int i = 0; i < digits; i++)
        pow10 *= 10;

    int middle = num % pow10;       
    middle = middle / 10;           
    int swapped = last * pow10 + middle * 10 + first;
    printf("Swapped number: %d\n", swapped);
    return 0;
}