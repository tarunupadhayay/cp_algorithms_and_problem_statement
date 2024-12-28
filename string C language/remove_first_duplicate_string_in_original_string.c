// Leetcode question-  https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
// test case : "daabcbaabcbc" ,"abc"
// output : "dab" , nothing

#include <stdio.h>
#include <string.h>

char* removeDuplicate(char* s, char* part)
{
    int n = strlen(part);
    int i = 0, j = 0;
    while (s[i] != '\0') {
        if (s[i] == part[j]) {
            j++;
            if (j == n) {
                // Found the pattern, remove it
                int k = i - j + 1;
                while (s[k + n] != '\0') {
                    s[k] = s[k + n];
                    k++;
                }
                s[k] = '\0';
                i = k - n;
                j = 0;
            }
        } else {
            j = 0;
        }
        i++;
    }
    return s;
}

int main()
{
    char s[100], part[100];
    scanf("%s %s", s, part);
    removeDuplicate(s, part);
    printf("%s\n", s);
    return 0;
}
