#include <iostream>
#include <cstring>

#define N 11

template<typename T>
void fill_arr(T*, int);

template<typename T>
void sort(T*, int);

template<typename T>
void show_arr(T*, int);

int main()
{
	int arr[N];

	fill_arr(arr, N);
	arr[0] = 6;
	show_arr(arr, N);

	sort(arr, N);
	show_arr(arr, N);

	return 0;
}

template<typename T>
void fill_arr(T* arr, int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 10;
}

template<typename T>
void sort(T* arr, int n)
{
	T* tmp = new int[n];
	memset(tmp, 0, sizeof(T) * N);

	T first = arr[0];

	int current = 0;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] <= first)
			tmp[current++] = arr[i];
	}

	tmp[current++] = first;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > first)
			tmp[current++] = arr[i];
	}

	memcpy(arr, tmp, sizeof(T) * N);
	delete[] tmp;
}

template<typename T>
void show_arr(T* arr, int n)
{
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}