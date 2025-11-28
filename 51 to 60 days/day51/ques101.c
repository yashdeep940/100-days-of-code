//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/

#include <stdio.h>

int main() {
    int n, target;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    while (n <= 0) {
        printf("Number of elements must be greater than zero.\nPlease enter again: ");
        scanf("%d", &n);
    }

    printf("Enter the target element to search: ");
    scanf("%d", &target);

    int nums[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &nums[i]);
    }

    int first = -1, last = -1;

    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            first = i;
            break;
        }
    }

    if (first != -1) {
        for (int i = n - 1; i >= first; i--) {
            if (nums[i] == target) {
                last = i;
                break;
            }
        }
        printf("First and last occurrence of %d: %d,%d\n", target, first, last);
    } else {
        printf("Target %d not found: -1,-1\n", target);
    }

    return 0;
}