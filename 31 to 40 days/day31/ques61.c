//Q61: Search for an element in an array using linear search.
/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2
Input 2:
4
10 20 30 40
25
Output 2:
-1
*/

#include <stdio.h>

int main() {
    int n, i, a[100], key;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("Found at index %d\n", i);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}