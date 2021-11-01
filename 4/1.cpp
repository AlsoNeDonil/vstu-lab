#include <iostream>

int main()
{
	int a = 15;
	int b = 10;
	int c = 1;

	int sum = a + b + c;
	if( (sum <= 10) && (sum >= 1) )
		b -= a;
	else
		a * b;

	printf("a=%d; b=%d; c=%d\n", a, b, c);
	return 0;
}