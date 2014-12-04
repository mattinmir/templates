#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include "myswap.hpp"
#include "smallest.hpp"
using namespace std;

int main()
{
	int a = 1, b = 2;
	string c("abc"), d("xyz");
	myswap(a, b);
	cout << a << " " << b << endl;
	myswap(c, d);
	cout << c << " " << d << endl;

	vector<int> v = { 66, 34, 34, 65, 2, 542, 45, 6, 2, 4, 63, 54 };
	vector <double> v2 = { 45678.7654, 464.6846, 645464.6546, 6546854.65465, 361654.65465, 65465.65465, 65564.654 };
	cout << index_of_smallest(v) << endl;
	cout << index_of_smallest(v2) << endl;
	return 0;
}