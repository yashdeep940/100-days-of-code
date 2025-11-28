//Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

/*
Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3

Input 2:
nums = [1,2,3]
Output 2:
-1

Input 3:
nums = [2,1,-1]
Output 3:
0

*/

#include <stdio.h>

int main() {
    int n, found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of elements cannot be non-positive.\n");
        return 1;
    }

    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        int sum1 = 0, sum2 = 0;

        for (int j = 0; j < i; j++)
            sum1 += a[j];

        for (int k = i + 1; k < n; k++)
            sum2 += a[k];

        if (sum1 == sum2) {
            printf("%d\n", i);
            found = 1;
            break;  
        }
    }

    if (!found)
        printf("-1\n");

    return 0;
}