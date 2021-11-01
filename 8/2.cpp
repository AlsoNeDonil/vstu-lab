#include <iostream>
#include <string>
#include <cstring>

int main()
{
	std::string content;
	std::getline(std::cin, content);

	int arr[256];
	memset(arr, 0, 256 * 4);

	for(int i = 0; i < content.size(); i++)
		arr[ static_cast<int>(content[i]) ]++;

	int max = 0;
	for(int i = 0; i < 256; i++)
	{
		if(arr[max] < arr[i])
			max = i;
	}

	printf("%c\n", max);
	return 0;
}