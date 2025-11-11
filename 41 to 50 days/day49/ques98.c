//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int last = 0;
    printf("Enter a name: ");
    fgets(str, sizeof(str), stdin);
    if (str[0] != ' ')
        printf("%c.", str[0]);

    for (int i = 1; str[i]; i++) {
        if (str[i - 1] == ' ' && str[i] != ' ') {
            last = i;
            printf("%c.", str[i]);
        }
    }
    printf(" %s", str + last);
    return 0;
}