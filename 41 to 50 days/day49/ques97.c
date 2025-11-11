//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a name: ");
    fgets(str, sizeof(str), stdin);
    if (str[0] != ' ')
        printf("%c.", str[0]);
    for (int i = 1; str[i]; i++)
        if (str[i - 1] == ' ' && str[i] != ' ')
            printf("%c.", str[i]);
    return 0;
}