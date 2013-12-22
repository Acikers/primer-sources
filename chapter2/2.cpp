/*
 * Write a C++ program that asks for a distance in furlongs
 * and converts it to yards. (One furlong is 220 yards.)
 */

#include <iostream>

int main()
{
	using namespace std;
	double dist = 0;

	cout << "Please, enter distance in furlongs:";
	cin >> dist;
	cout << "Converted value: " << dist * 220 << " yards." << endl;

	return 0;
}
