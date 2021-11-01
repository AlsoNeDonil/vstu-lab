#include <iostream>

#define size(a) sizeof(a) / sizeof(a[0])

int main()
{
	int arr[] = {0, -15, 4, 20, 77, 244, 0, -15};

	int min_value = arr[0];
	int max_value = arr[0];

	for(int i = 0; i < size(arr); i++)
	{
		if(arr[i] < min_value)
			min_value = arr[i];
		
		if(arr[i] > max_value)
			max_value = arr[i];
	}

	int diff = max_value - min_value;
	std::cout << diff << std::endl;

	return 0;
}