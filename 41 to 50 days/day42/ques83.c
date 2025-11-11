//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include <stdio.h>

int main() {
    char str[100];
    int v = 0, c = 0;

    printf("Enter a string: ");
    scanf("%s", str);  
    for (int i = 0; str[i]; i++) {
        char ch = str[i] | 32;  
        if (ch >= 'a' && ch <= 'z')
            (ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u') ? v++ : c++;
    }

    printf("Vowels=%d, Consonants=%d\n", v, c);
    return 0;
}