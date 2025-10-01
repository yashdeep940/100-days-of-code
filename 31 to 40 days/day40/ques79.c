//Q79: Perform diagonal traversal of a matrix.
/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9
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
    printf("Diagonal traversal:\n");
    for (int k = 0; k < r + c - 1; k++) {
        int i = (k < c) ? 0 : k - c + 1;
        int j = (k < c) ? k : c - 1;
        while (i < r && j >= 0)
            printf("%d ", a[i++][j--]);
    }
    return 0;
}