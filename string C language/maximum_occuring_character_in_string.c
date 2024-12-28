// removing the maximum occuring character in string 
// gfg - https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1
//input - taaaaarunnccc
// output - a

#include <stdio.h>
#include <string.h>

char maxOccCh(char s[]) {
    int n = strlen(s);
    int arr[26] = {0};
    for(int i = 0; i < n; i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            int a = s[i] - 'a';
            arr[a] = arr[a] + 1;
        }
        if(s[i] >= 'A' && s[i] <= 'Z') {
            int a = s[i] - 'A';
            arr[a]++;
        }
    }
    int maxi = -1, ans = 0;
    for(int i = 0; i < 26; i++) {
        if(maxi < arr[i]) {
            maxi = arr[i];
            ans = i;
        }
    }
    char c = 'a' + ans;
    return c;
}

char maxoccusingmap(char s[]) {
    int n = strlen(s);
    int mp[256] = {0};
    for(int i = 0; i < n; i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            mp[s[i]]++;
        }
        if(s[i] >= 'A' && s[i] <= 'Z') {
            char a = s[i] - 'A' + 'a';
            mp[a]++;
        }
    }
    int max = -1;
    char c;
    for(int i = 0; i < 256; i++) {
        if(max < mp[i]) {
            max = mp[i];
            c = (char)i;
        }
    }
    return c;
}

int main() {
    char s[1000];
    fgets(s, 1000, stdin);
    char v = maxoccusingmap(s);
    printf("%c\n", v);
    return 0;
}
