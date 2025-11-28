//Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

/*
Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/

#include <stdio.h>

int main() {
    int n, x, found = 0, ceilIndex;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    while (n <= 0) {
        printf("Number of elements must be positive. Please re-enter: ");
        scanf("%d", &n);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    int nums[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n; i++) {
        if (nums[i] >= x) {
            ceilIndex = i;
            found = 1;
            break;
        }
    }

    if (found)
        printf("Ceil index: %d\n", ceilIndex);
    else
        printf("-1\n");

    return 0;
}