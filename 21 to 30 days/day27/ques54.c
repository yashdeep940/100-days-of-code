//Q54: Write a program to print the following pattern:

//   *
//  ***
// *****
//*******
// *****
//  ***
//   *


/*
Sample Test Cases:
Input 1:
Output 1:
Pattern with layers of stars as shown.
*/

#include <stdio.h>

int main() {
    int i, j, space;
    for (i = 1; i <= 4; i++) {
        space = 4 - i;
        for (j = 1; j <= space; j++) printf(" ");
        for (j = 1; j <= 2*i - 1; j++) printf("*");
        printf("\n");
    }
    for (i = 3; i >= 1; i--) {
        space = 4 - i;
        for (j = 1; j <= space; j++) printf(" ");
        for (j = 1; j <= 2*i - 1; j++) printf("*");
        printf("\n");
    }
    return 0;
}