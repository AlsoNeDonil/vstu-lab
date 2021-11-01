#include <iostream>
#include <math.h>

#define size(a) sizeof(a) / sizeof(a[0])

bool simple(int);

int main()
{
	int arr[] = {4, 6, 27, 8, 29, 23, 17, 19, 5, 1};

	for(int i = 0; i < size(arr); i++)
	{
		if( simple(arr[i]) )
			printf("%d ", arr[i]);
	} printf("\n");

	return 0;
}

bool simple(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if( (n % i) == 0)
			return false;
	}
	return true;
}