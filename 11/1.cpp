#include <iostream>
#include <vector>
#include <algorithm>

void fill_vec(std::vector<int>& v, int n);
void show_vec(std::vector<int>& v);

int main()
{
	std::vector<int> vec;
	fill_vec(vec, 15);

	show_vec(vec);
	std::sort(vec.begin(), vec.end());
	show_vec(vec);

	return 0;
}

void fill_vec(std::vector<int>& v, int n)
{
	for(int i = 0; i < n; i++)
		v.push_back(rand() % 10);
}

void show_vec(std::vector<int>& v)
{
	for(auto it : v)
		printf("%d ", it);
	printf("\n");
}