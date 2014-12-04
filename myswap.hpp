#ifndef MYSWAP_HPP
#define MYSWAP_HPP

template<typename T>
void myswap(T &t1, T &t2)
{
	T temp;
	temp = t1;
	t1 = t2;
	t2 = temp;
}

#endif // !MYSWAP_HPP