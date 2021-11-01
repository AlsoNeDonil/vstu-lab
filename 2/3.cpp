#include <iostream>

int main()
{
	int a = 10;
	int b = 3;

	int result = ( a % b == 0) || (b % a == 0);
	std::cout << result << std::endl;

	return 0;
}