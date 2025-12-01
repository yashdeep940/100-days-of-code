//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>
#include <string.h>

int main() {
    enum menu { 
        ADD, 
        SUBTRACT, 
        MULTIPLY 
    };

    char op[9];   
    int a, b;
    enum menu choice;

    printf("Enter operation (ADD / SUBTRACT / MULTIPLY): ");
    scanf("%s", op);

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\n");

    if (strcmp(op, "ADD") == 0)
        choice = ADD;
    else if (strcmp(op, "SUBTRACT") == 0)
        choice = SUBTRACT;
    else if (strcmp(op, "MULTIPLY") == 0)
        choice = MULTIPLY;
    else {
        printf("Invalid Operation\n");
        return 0;
    }

    switch (choice) {
        case ADD:
            printf("Result = %d\n", a + b);
            break;
        case SUBTRACT:
            printf("Result = %d\n", a - b);
            break;
        case MULTIPLY:
            printf("Result = %d\n", a * b);
            break;
    }

    return 0;
}