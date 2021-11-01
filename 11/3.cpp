#include <iostream>
#include <queue>
#include <vector>

std::vector<int> unpack_queue(std::queue<int>&);
std::queue<int> pack_queue(std::vector<int>&);

void delete_element(std::queue<int>&, int);
void fill_queue(std::queue<int>&, int);
void show_queue(std::queue<int>&);

std::ostream& operator<<(std::ostream& stream, std::queue<int>& q)
{
	std::vector<int> v = unpack_queue(q);

	for(auto it : v)
		stream << it << " ";
	return stream;
}

int main()
{
	std::queue<int> q;
	fill_queue(q, 15);
	
	delete_element(q, 5);
	std::cout << q << std::endl;

	return 0;
}

std::vector<int> unpack_queue(std::queue<int>& q)
{
	std::vector<int> v;

	while (!q.empty())
	{
		v.push_back(q.front());
		q.pop();
	}

	return v;
}

std::queue<int> pack_queue(std::vector<int>& v)
{
	std::queue<int> q;
	for (auto it : v)
		q.push(it);
	return q;
}

void delete_element(std::queue<int>& q, int n)
{
	auto v = unpack_queue(q);
	v.erase(v.begin() + n);

	q = pack_queue(v);
}

void fill_queue(std::queue<int>& q, int n)
{
	for (int i = 0; i < n; i++)
		q.push(rand() % 10);
}