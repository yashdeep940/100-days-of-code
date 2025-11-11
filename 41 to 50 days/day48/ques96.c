//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

void rev(char *s, int start, int end) {
    while (start < end) {
        char t = s[start];
        s[start++] = s[end];
        s[end--] = t;
    }
}
int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    int i = 0, word_start = 0;
    while (str[i]) {
        if (str[i] == ' ' || str[i] == '\n') {
            rev(str, word_start, i - 1);
            word_start = i + 1;
        }
        i++;
    }
    printf("%s", str);
    return 0;
}