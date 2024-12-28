// Remove all consecutive character of string of k group - https://www.geeksforgeeks.org/reduce-the-string-by-removing-k-consecutive-identical-characters/
// string -  geeksforgeeks , k = 2
// output - gksforgks


#include <stdio.h>
#include <string.h>

// Removes all consecutive characters of string of k group
char* removecons(char* s, int k)
{
    if (k == 1) {
        s[0] = '\0';
        return s;
    }
    int i = 0;
    while (i < strlen(s) - 1) {
        if (s[i] == s[i + 1]) {
            int count = 2;
            int j = i + 1;
            while (s[j] == s[j + 1] && j < strlen(s) && count <= k) {
                count++;
                j++;
            }
            memmove(&s[i], &s[i + count], strlen(s) - i - count + 1);
            i = 0;
        }
        else {
            i++;
        }
    }
    return s;
}

// Removes all consecutive characters of string of k group using stack
char* removeconsusingstack(char* s, int k)
{
    // Create a stack using pair<> for storing each character and corresponding repetition
    struct pair {
        int second;
        char first;
    };
    struct pair st[strlen(s)];
    int top = -1;
    // Initialize the returning string
    char* output = s;
    // Base case: if k = 1 then all characters can be removed at each instance
    if (k == 1) {
        s[0] = '\0';
        return s;
    }
    // Iterate through the string
    for (int i = 0; i < strlen(s); i++) {
        // If stack is empty then simply add the character with count 1
        if (top == -1) {
            top++;
            st[top].first = s[i];
            st[top].second = 1;
        }
        else {
            // If character at top of stack is same as current character increase the number of repetitions
            // in the top of stack by 1
            if (s[i] == st[top].first) {
                st[top].second++;
                if (st[top].second == k) {
                    top -= k - 1;
                }
            }
            else {
                // If character at top of stack is not same as current character push the charc along with count 1
                // into the top of stack
                top++;
                st[top].first = s[i];
                st[top].second = 1;
            }
        }
    }
    // Pop characters from stack and add them to output
    int i = 0;
    while (top >= 0) {
        for (int j = 0; j < st[top].second; j++) {
            output[i++] = st[top].first;
        }
        top--;
    }
    output[i] = '\0';
    return output;
}

int main()
{
    char s[] = "AllltheeeBesttt";
    printf("S: %s\n", s);
    int k = 3;
    char* c = removecons(s, k);
    printf("%s\n", c);
    char* d = removeconsusingstack(s, k);
    printf("%s\n", d);
    return 0;
}
