//Q74: Find the transpose of a matrix.
/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6
*/

#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    printf("Transpose:\n");
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}