#include <iostream>

#define n 15

int main()
{
	int positive = 0;
	int negative = 0;
	int zero = 0;

	int tmp = 0;
	for(int i = 0; i < n; i++)
	{
		std::cin >> tmp;
		if(tmp == 0)
			zero++;
		else
		{
			if(tmp > 0)
				positive++;
			else
				negative++;
		}
	}

	printf("pos = %d; neg = %d; zero = %d", positive, negative, zero);

	return 0;
}