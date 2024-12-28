#include <stdio.h>

void upper(char* str)
{

	for (int i = 0; str[i] != '\0'; ++i){
	    if(str[i] >= 'a' || str[i] <= 'z')
	    {
	        printf("%c",str[i] - 32);
	    }
	    else
	    {
	        printf("%c",str[i]);
	    }
	}

}

int main()
{
	char str[] = "tarun";
	upper(str);
	return 0;
}
