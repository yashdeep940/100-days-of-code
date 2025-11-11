//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[50];
    int len = 0, max = 0, start = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            len++;
        } else {
            if (len > max) {
                max = len;
                start = i - len;
            }
            len = 0;
            if (str[i] == '\0') break;
        }
    }
    strncpy(longest, str + start, max);
    longest[max] = '\0';
    printf("%s\n", longest);
    return 0;
}