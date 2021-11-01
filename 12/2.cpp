#include <iostream>
#include <math.h>

#define PI 3.1415926535

float square(float, float, float);
inline float square(float);

int main()
{
	std::cout << square(3, 4, 5) << std::endl;;
	std::cout << square(5) << std::endl;
	return 0;
}

float square(float a, float b, float c)
{
	float p = (a + b + c) / 2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

inline float square(float r)
{
	return PI * r* r;
}