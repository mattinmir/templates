#ifndef SMALLEST_HPP
#define SMALLEST_HPP

#include <vector>

template<typename T>
int index_of_smallest(std::vector<T> v)
{
	int min = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] < v[min])
			min = i;
	}
	return min;
}

#endif // !SMALLEST_HPP
