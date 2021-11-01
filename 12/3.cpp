#include <iostream>
#include <stdexcept>

#define size(a) sizeof(a) / sizeof(a[0])

int main()
{
	int arr[] = { 4, 4, 4, 4 ,-4 ,4 ,4 ,4 };
	int sum = 0;
	try
	{
		for (int i = 0; i < size(arr); i++)
		{
			if (arr[i] < 0)
				throw std::out_of_range("");
			sum += arr[i];
		}
	}
	catch (std::out_of_range&)
	{
		std::cout << "Out of range" << std::endl;
		return -1;
	}

	std::cout << sum << std::endl;

	return 0;
}