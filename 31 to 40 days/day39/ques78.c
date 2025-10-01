//Q78: Find the sum of main diagonal elements for a square matrix.
/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15
*/

#include <stdio.h>

int main() {
    int r, c, sum = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    if (r == c)
        for (int i = 0; i < r; i++)
            sum += a[i][i];
    printf("Sum of main diagonal = %d\n", sum);
    return 0;
}