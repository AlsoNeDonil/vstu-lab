#include <iostream>

int main()
{
	const char* str = 
	"ABCDEABCDE"
	"ABCDEABCDE"
	"ABCDEABCDE"
	"ABCDEABCDE"
	"ABCDEABCDE"
	"ABCDEABCDE"
	"ABCDEABCDE"
	"ABCDEABCDE"
	"ABCDEABCDE"
	"ABCDEABCDE";

	int counter = 0;
	for(int i = 0; i < 100; i++)
		if(str[i] == 'A')
			counter++;

	std::cout << counter << std::endl;
	return 0;
}