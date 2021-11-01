#include <iostream>

int main()
{
	int degrees = 0;
	std::cin >> degrees;

	int hours = degrees / 30;
	int minutes = (degrees % 30) * 2;

	printf("Hours=%d; minutes=%d\n", hours, minutes);
	return 0;
}
