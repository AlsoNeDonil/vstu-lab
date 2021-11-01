#include <iostream>

#define n 15

int main()
{
	int arr[n];

	for(int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		printf("%d ", arr[i]);
	} printf("\n");

	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] % 2 == 1)
			sum += arr[i];
	} printf("\n");

	printf("%d\n", sum);

	return 0;
}