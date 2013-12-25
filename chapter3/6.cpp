/*
 * Write a program that asks how many miles you have driven and how many
 * gallons of gasoline you have used and then reports the miles per gallon
 * your car has gotten. Or, if you prefer, the program can request distance in
 * kilometers and petrol in liters and then report the result European style,
 * in liters per 100 kilometers.
 */

#include <iostream>


int main()
{
	using namespace std;

	float liters, km;

	cout << "Enter distance in kilometers: ";
	cin >> km;
	cout << "Enter how many petrol in liters you have used: ";
	cin >> liters;
	cout << "Your car has has gotten " << (liters / km) * 100 <<
		" liters per 100 kilometers.\n";

	return 0;
}
