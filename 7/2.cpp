#include <iostream>
#pragma GCC	diagnostic ignored "-Wformat" 

#define n 15

int main()
{
	int arr[n];
	for(int i = 0; i < n; i++)
		arr[i] = rand() % 10;

	printf("Start at: %04x\n", arr);
	for(int i = 3; i < 10; i++)
		printf("%04x %d\n", arr + i, arr[i]);
	return 0;
}