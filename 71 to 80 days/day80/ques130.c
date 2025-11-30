//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks;

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not create students.txt!\n");
        return 1;
    }

    fprintf(fp, "%s %d %d\n", "Asha", 101, 85);
    fprintf(fp, "%s %d %d\n", "Ravi", 102, 92);

    fclose(fp);
    printf("Student records stored successfully.\n");

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open students.txt!\n");
        return 1;
    }

    printf("\nDisplaying student records:\n");
    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}