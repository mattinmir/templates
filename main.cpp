#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
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

	cout << endl << endl;

	vector<int> v = { 66, 34, 34, 65, 2, 542, 45, 6, 2, 4, 63, 54 };
	vector <double> v2 = { 45678.7654, 464.6846, 645464.6546, 6546854.65465, 361654.65465, 65465.65465, 65564.654 };
	
	cout << index_of_smallest(v) << endl;
	cout << index_of_smallest(v2) << endl;

	cout << endl << endl;

	cout << *find(v.begin(), v.end(), min_element(v.begin(), v.end())) << endl;
	cout << *find(v2.begin(), v2.end(), min_element(v2.begin(), v2.end())) << endl;
	return 0;
}