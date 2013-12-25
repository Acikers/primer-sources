/*
 * Write a short program that asks for your height in integer inches
 * and then converts your height to feet and inches. Have the program
 * use the underscore character to indicate where to type the response.
 * Also use a const symbolic constant to represent the conversion factor.
 */

#include <iostream>

const int INCHES_IN_FEET = 12;

int main()
{
	using namespace std;

	int inches;

	cout << "Please enter your height in inches: ";
	cin >> inches;
	cout << "Your height are: " << inches / INCHES_IN_FEET << " feet plus "
		<< inches % INCHES_IN_FEET << " inches.\n";

	return 0;
}
