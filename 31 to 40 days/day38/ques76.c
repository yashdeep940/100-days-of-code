//Q76: Check if a matrix is symmetric.
/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True
Input 2:
2 2
1 0
2 1
Output 2:
False
*/

#include <stdio.h>

int main() {
    int r, c, flag = 1;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    if (r != c) {
        printf("Not square = Not symmetric\n");
        return 0;
    }
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (a[i][j] != a[j][i])
                flag = 0;
    printf(flag ? "True\n" : "False\n");
    return 0;
}