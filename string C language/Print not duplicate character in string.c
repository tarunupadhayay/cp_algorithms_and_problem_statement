#include <stdio.h>
#include <string.h>
 
void removeChar(char string1[]) {
    int len1 = strlen(string1);
    printf("%d\n",len1);
 
    int arr[26] = {0};
    for (int i = 0; i < len1; i++) {
        int a = string1[i];
        a = a - 97;
        arr[a]++;
    }
    
    for (int i = 0; i <26; i++) {
        if(arr[i] == 1)
        {
            int n = 97 + i;
            char c = (char) n;
            // printf("%d-->",i);
            printf("%c",c);
        }
    }
 
}
 
int main() {
    char string1[] = "tarunupadhayayz";
    removeChar(string1);
    return 0;
}