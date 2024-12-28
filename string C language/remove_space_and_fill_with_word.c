// GFG question
// word = tarun upadhayay
// result - tarun@40upadhayay

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1000

char* fillstr(char* str) {
    char temp[] = "@40";
    int n = strlen(str);
    char* s = (char*)malloc(sizeof(char) * (n + 3)); // Allocate memory for the new string

    // Copy original string to new string and replace spaces with "@40"
    for (int i = 0; i < n; i++) {
        if (str[i] == ' ') {
            strcat(s, temp);
        } else {
            char ch[2] = { str[i], '\0' };
            strcat(s, ch);
        }
    }
    return s;
}

int main() {
    char s[MAX];
    fgets(s, MAX, stdin);
    char* str = fillstr(s);
    printf("%s\n", str);
    free(str); // Free dynamically allocated memory
    return 0;
}
