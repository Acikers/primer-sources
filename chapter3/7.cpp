/*
 * Write a program that asks you to enter an automobile gasoline consumption
 * figure in the European style (liters per 100 kilometers) and converts to
 * the U.S. style of miles per gallon. Note that in addition to using different
 * units of measurement, the U.S. approach (fuel / distance). Note that
 * 100 kilometers is 62.14 miles, and 1 gallon is 3.875 liters. Thus, 19 mpg is
 * about 12.41 l/100 km, and 27 mpg is about 8.71 l/100km.
 */

#include <iostream>

const float miles_per_km = 0.6214;
const float liters_per_gallon = 3.875;


int main()
{
	using namespace std;

	float input;

	cout << "Enter consumption in liters per 100 kilometers: ";
	cin >> input;
	cout << "There your value converted to mpg: " <<
		(1 / input) * miles_per_km * liters_per_gallon * 100 << endl;

	return 0;

}
