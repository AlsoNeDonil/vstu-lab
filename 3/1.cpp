#include <iostream>

int main()
{
	int a = 26;
	a ^= 0b10000;

	std::cout << a << std::endl;
	return 0;
}