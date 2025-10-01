//Q63: Merge two arrays.
/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5
*/

#include <stdio.h>

int main() {
    int n1, n2, i, a[100], b[100];
    printf("Size 1: ");
    scanf("%d", &n1);
    printf("Array 1: ");
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    printf("Size 2: ");
    scanf("%d", &n2);
    printf("Array 2: ");
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    printf("Merged: ");
    for (i = 0; i < n1; i++)
        printf("%d ", a[i]);
    for (i = 0; i < n2; i++)
        printf("%d ", b[i]);
    return 0;
}