#include <iostream>
#include <list>

void fill_list(std::list<int>&, int);
void show_list(std::list<int>&);

int main()
{
	std::list<int> list;
	fill_list(list, 15);
	show_list(list);

	for(auto it : list)
	{
		if(it < 0)
			printf("%d ", it);
	} printf("\n");


	return 0;
}

void fill_list(std::list<int>& l, int n)
{
	for(int i = 0; i < n; i++)
		l.push_back( (rand() % 10) - 5 );
}

void show_list(std::list<int>& l)
{
	for(auto it : l)
		printf("%d ", it);
	printf("\n");
}