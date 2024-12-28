#include <stdio.h>
#include <string.h>
 
char* removeChars(char string1[], char string2[]) {
    int i, j, k;
    int len1 = strlen(string1);
    int len2 = strlen(string2);
 
    for (i = 0; i < len2; i++) {
        for (j = 0; j < len1; j++) {
            if (string1[j] == string2[i]) {
                for (k = j; k < len1; k++) {
                    string1[k] = string1[k + 1];
                }
                len1--;
                j--;
            }
        }
    }
 
    return string1;
}
 
int main() {
    char string1[] = "tarunupadhayay";
    char string2[] = "arun";
    printf("%s\n", removeChars(string1, string2));
    return 0;
}