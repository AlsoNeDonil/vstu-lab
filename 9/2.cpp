#include <iostream>
#include <cstring>

int main()
{
	const char* test_str = "lorem ipsum dolor sit amet";
	const char* valid_let = "aeiouy";

	int counter = 0;
	for(int i = 0; i < strlen(test_str); i++)
	{
		for(int j = 0; j < strlen(valid_let); j++)
		{
			if(test_str[i] == valid_let[j])
				counter++;
		}
	}

	std::cout << counter << std::endl;
	return 0;
}