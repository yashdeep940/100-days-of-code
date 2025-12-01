//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/

#include <stdio.h>
#include <string.h>

int main() {
    enum role { ADMIN, USER, GUEST };
    char input[20];
    enum role r;

    printf("Enter role (ADMIN / USER / GUEST): ");
    scanf("%s", input);

    if (strcmp(input, "ADMIN") == 0)
        r = ADMIN;
    else if (strcmp(input, "USER") == 0)
        r = USER;
    else if (strcmp(input, "GUEST") == 0)
        r = GUEST;
    else {
        printf("Invalid Role!\n");
        return 0;
    }

    if (r == ADMIN)
        printf("Welcome Admin!\n");
    else if (r == USER)
        printf("Welcome User!\n");
    else if (r == GUEST)
        printf("Welcome Guest!\n");

    return 0;
}