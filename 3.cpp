#include <iostream>

int main()
{
	int arr[] = {0, -1, -2, -2, 3};

	int pos = 0;
	int neg = 0;

	for(int i = 0; i < sizeof(arr) / 4; i++)
	{
		if(arr[i] > 0)
			pos++;
		if(arr[i] < 0)
			neg++;
	}

	int* new_arr;
	if(pos < neg)
		new_arr = new int[neg];
	else
	{
		new_arr = new int[pos];
		int pos = 0;
		for(int i = 0; i < 5; i++)
		{
			if(arr[i] > 0)
				new_arr[pos++] = arr[i];
		}
	}

	delete[] new_arr;
	return 0;
}