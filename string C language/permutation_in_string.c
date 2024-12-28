// Permutation in string - https://leetcode.com/problems/permutation-in-string/submissions/ 
// in this ques we have check wheather the given s1 permutation are 
// present in the s2 or not
// input - s1 - ab  s2 - eidbaoooo
// output - YES
// tc - O(n) + O(m) sc - O(1)

#include <stdio.h>
#include <string.h>

#define SIZE 26

int checkEqual(int a[SIZE], int b[SIZE])
{
    int i;
    for(i = 0; i < SIZE; i++)
    {
        if(a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
}

int checkIncluding(char s1[], char s2[])
{
    int c1[SIZE] = {0};
    int c2[SIZE] = {0};
    int i, index, index2, windowSize;

    // Character count array
    for(i = 0; s1[i] != '\0'; i++)
    {
         index = s1[i] - 'a';
         c1[index]++;
    }

    // Traverse s2 string in window of size s1 length and compare
    i = 0;
    windowSize = strlen(s1);

    // Running for first window
    while(i < windowSize && s2[i] != '\0')
    {
        index = s2[i] - 'a';
        c2[index]++;
        i++;
    }
    if(checkEqual(c1, c2))
    {
        return 1;
    }

    // Aage window process karo
    while(s2[i] != '\0')
    {
        char newch = s2[i];
        index = newch - 'a';
        c2[index]++;

        char oldchar = s2[i - windowSize];
        index2 = oldchar - 'a';
        c2[index2]--; 
        i++;
        if(checkEqual(c1, c2))
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char s1[] = "ab";
    char s2[] = "eidbaooooo";
    int yn = checkIncluding(s1, s2);
    printf("%d\n", yn);  
    return 0;
}
