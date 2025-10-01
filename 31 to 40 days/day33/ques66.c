//Q66: Insert an element in a sorted array at the appropriate position.
/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6
*/

#include <stdio.h>

int main() {
    int n, i, b, a[100];
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter sorted array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter element to insert: ");
    scanf("%d", &b);
    for (i = n - 1; i >= 0 && a[i] > b; i--)
        a[i + 1] = a[i];
    a[i + 1] = b;
    n++;
    printf("Updated array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}