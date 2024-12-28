#include <stdio.h>

int Atoi(char* str)
{
	int res = 0;

	for (int i = 0; str[i] != '\0'; ++i)
		res = res * 10 + str[i] - '0';

	return res;
}

int main()
{
	char str[] = "98877789";
	int v = Atoi(str);
	printf("%d ", v);
	return 0;
}
