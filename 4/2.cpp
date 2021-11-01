#include <iostream>
#include <algorithm>

#define m std::max

int main()
{
	int a, b, c, d, e;

	std::cin >> a >> b >> c >> d >> e;
	int max = m( m(m(m(a, b), c), d), e );

	std::cout << max << std::endl;
	return 0;
}