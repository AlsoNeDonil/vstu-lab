#include <iostream>
#include <algorithm>

int main()
{
	int n = 0;
	std::cin >> n;

	int* arr = new int[n];

	for(int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
		printf("%d ", arr[i]);
	} printf("\n");

	int dublicate = 0;
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(arr[i] == arr[j])
			{
				dublicate++;
				break;
			}
		}
	}

	std::cout << dublicate << std::endl;

	delete[] arr;
	return 0;
}