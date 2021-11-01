#include <iostream>

#define size(a) sizeof(a) / sizeof(a[0])

inline int valid(int n)
{
	return ( (n % 3 == 0) and (n % 5 == 0) );
}

int main()
{
	int arr[] = {15, 30, 0, -15, -100};

	int positive = 0;
	int negative = 0;
	for(int i = 0; i < size(arr); i++)
	{
		if( arr[i] > 0 and valid(arr[i]) )
			positive++;

		if( arr[i] < 0 and valid(arr[i]) )
			negative++;
	}

	printf("%d %d\n", positive, negative);

	return 0;
}