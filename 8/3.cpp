#include <iostream>
#include <string>

int main()
{
	std::string min_len;
	std::string max_len;

	std::string tmp;
	for(int i = 0; i < 10; i++)
	{
		std::cin>>tmp;
		if(min_len.size() == 0)
			min_len = tmp;

		if(tmp.size() > max_len.size())
			max_len = tmp;
		if(tmp.size() < min_len.size())
			min_len = tmp;
	}

	std::cout << min_len + max_len << std::endl;

	return 0;
}