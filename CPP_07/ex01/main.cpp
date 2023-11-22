#include <iostream>
#include "iter.hpp"

template <typename T>
void print(const T& value)
{
	std::cout << value << std::endl;
}

int main()
{
	int array[] = {1, 2, 3, 4, 5};
	::iter(array, 5, print<int>);
	return 0;
}
