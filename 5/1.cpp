#include <iostream>

#define n 10
#define k 2

int main()
{
	int arr[n];

	for(int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		printf("%d ", arr[i]);
	}
	printf("\n");

	for(int i = 0; i < n; i++)
		if(arr[i] % k == 0)
			printf("%d ", arr[i]);
	printf("\n");

	return 0;
}