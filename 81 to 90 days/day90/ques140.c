//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>
#include <string.h>

enum Gender { 
    MALE, 
    FEMALE, 
    OTHER 
};

struct Person {
    char name[20];
    enum Gender gender;
};

int main() {
    struct Person p;
    char g[10];

    printf("Enter Name: ");
    scanf("%s", p.name);

    printf("Enter Gender (MALE / FEMALE / OTHER): ");
    scanf("%s", g);

    if (strcmp(g, "MALE") == 0)
        p.gender = MALE;
    else if (strcmp(g, "FEMALE") == 0)
        p.gender = FEMALE;
    else if (strcmp(g, "OTHER") == 0)
        p.gender = OTHER;
    else {
        printf("Invalid Gender!\n");
        return 0;
    }

    printf("Name: %s\n", p.name);
    if (p.gender == MALE)
        printf("Gender: Male\n");
    else if (p.gender == FEMALE)
        printf("Gender: Female\n");
    else if (p.gender == OTHER)
        printf("Gender: Other\n");

    return 0;
}