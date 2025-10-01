//Q69: Find the second largest element in an array.
/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40
*/

#include <stdio.h>

int main() {
    int n, i, a[100], max, second;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    max = second = -1;
    for (i = 0; i < n; i++) {
        if (a[i] > max) {
            second = max;
            max = a[i];
        } else if (a[i] > second && a[i] < max) {
            second = a[i];
        }
    }
    printf("Second largest = %d\n", second);
    return 0;
}