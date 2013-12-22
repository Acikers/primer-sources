/*
 * Write a program that has main() call a user-defined function
 * that takes a Celsius temperature value as an argument
 * and then returns the equivalent Fahrenheit value. The program
 * should request the Celsius value as input from the user and display
 * the result, as shown in the following code:
 *
 * Please enter a Celsius value: 20
 * 20 degrees Celsius is 68 degrees Fahrenheit.
 *
 * For reference, here is the formula for making the conversion:
 * Fahrenheit = 1.8 * degrees Celsius + 32.0
 */

#include <iostream>

inline double convert(const double celsius_temp)
{
	return 1.8 * celsius_temp + 32.0;
}

int main()
{
	using namespace std;
	double celsius;

	cout << "Please enter a Celsius value: ";
	cin >> celsius;
	cout << celsius << " degrees Celsius is " << convert(celsius) <<
		" degrees Fahrenheit." << endl;

	return 0;
}
