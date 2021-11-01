#include <iostream>

void string_len(int* len, const char* s);

int main()
{
	int len = 0;
	string_len(&len, "lorem ipsum dolor sit amet");

	printf("%d\n", len);
	return 0;
}

void string_len(int* len, const char* s)
{
	if(s[*len] != '\0')
	{
		(*len)++;
		string_len(len, s);
	}
}