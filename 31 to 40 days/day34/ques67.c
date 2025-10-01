//Q67: Insert an element in an array at a given position.
/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40
*/

#include <stdio.h>

int main() {
    int n, i, pos, x, a[100];
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter position and value: ");
    scanf("%d %d", &pos, &x);
    for (i = n; i > pos; i--)
        a[i] = a[i - 1];
    a[pos] = x;
    n++;
    printf("Updated array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}