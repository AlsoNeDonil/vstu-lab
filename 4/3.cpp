#include <iostream>

inline void odd(int n)
{
	if(n % 2 == 0)
		std::cout << n << std::endl;
}

int main()
{
	odd(1); odd(2); odd(3); odd(4); odd(5);
	odd(6); odd(7); odd(8); odd(9); odd(10);   

	return 0;
}