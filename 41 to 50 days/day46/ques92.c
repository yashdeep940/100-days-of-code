//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>

int main() {
    char str[100], freq[26] = {0};
    printf("Enter a string: ");
    scanf("%s", str);
    for (int i = 0; str[i]; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            if (++freq[ch - 'a'] == 2) {
                printf("%c\n", ch);
                return 0;
            }
        }
    }
    printf("No repeating lowercase character.\n");
    return 0;
}