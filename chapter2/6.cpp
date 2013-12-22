/*
 * Write a program that asks the user to enter an hour value and a minute value.
 * The main() function should then pass these two value to a type void function
 * that displays the two values in the format shown in the follwing sample run:
 *
 * Enter the number of hours: 9
 * Enter the number of minutes: 28
 * Time: 9:28
 */

#include <iostream>

void display_time(const int hours, const int minutes)
{
	std::cout << "Time: " << hours << ":" << minutes << std::endl;
}

int main()
{
	using namespace std;
	int hours, minutes;

	cout << "Enter the number of hours: ";
	cin >> hours;
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	display_time(hours, minutes);

	return 0;
}
