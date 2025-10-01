//Q68: Delete an element from an array.
/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5
*/

#include <stdio.h>

int main() {
    int n, i, pos, a[100];
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    for (i = pos; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
    printf("Updated array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}