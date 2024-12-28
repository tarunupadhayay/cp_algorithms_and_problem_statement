// removing the maximum occuring character in string 
// gfg - https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1
//input - taaaaarunnccc
// output - a


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int strCompression(char* chars, int size)
{
    int i = 0;
    int ansIndex = 0;
    while(i<size)
    {
        int j = i + 1;
        while(j<size && chars[i]==chars[j])
        {
            j++;
        }

        chars[ansIndex++] = chars[i];
        int count = j - i;
        if(count > 1){
            char cnt[10];
            sprintf(cnt, "%d", count);
            int k;
            for(k=0;k<strlen(cnt);k++)
            {
                chars[ansIndex++] = cnt[k];
            }
        }
        i = j;
    }
    return ansIndex;
}

int main()
{
    char arr[] = {'a','a','b','b','b','c','c'};
    int m = sizeof(arr)/sizeof(arr[0]);
    char* chars = (char*) malloc(sizeof(char) * m);
    memcpy(chars, arr, sizeof(char) * m);
    int n = strCompression(chars, m);
    int i;
    for(i=0;i<n;i++)
    {
        printf("%c ", chars[i]);
    }
    printf("\n");
    free(chars);
    return 0;
}