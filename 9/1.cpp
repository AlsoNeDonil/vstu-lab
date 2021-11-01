#include <iostream>

bool is_simple(int);
void find_simple(int, int);

int main()
{
	find_simple(1, 100);
	return 0;
}

bool is_simple(int n)
{
	for(int i = 2; i < n; i++)
		if(n % i == 0)
			return false;
	return true;
}

void find_simple(int start, int end)
{
	for(int i = start; i <= end; i++)
		if(is_simple(i))
			printf("%d ", i);
	printf("\n");
}