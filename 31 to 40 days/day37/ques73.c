//Q73: Find the sum of each row of a matrix and store it in an array.
/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15
*/

#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c], rowSum[r];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            rowSum[i] += a[i][j];
        }
    }
    printf("Sum of each row:\n");
    for (int i = 0; i < r; i++)
        printf("%d ", rowSum[i]);
    return 0;
}