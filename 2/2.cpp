#include <iostream>

int main()
{
	int value = 0;
	std::cin >> value;

	for(int i = 0; i < 4; i++)
	{
		std::cout << value % 10;
		value /= 10; 
	} std::cout << std::endl;

	return 0;
}