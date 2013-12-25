/*
 * Write a program that asks the user to enter the number of seconds as an
 * integer value (use type long, or, if available, long long) and that then
 * displays the equivalent time on days, hours, minutes, and seconds. Use
 * symbolic constants to represent the number of ours in the day, the number
 * of minutes in an hour, and the number of seconds in a minute. The output
 * should look like this:
 *
 * Enter the number of seconds: 31600000
 * 31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
 */

#include <iostream>

const int SECS_IN_MINUTES = 60;
const int MINS_IN_HOUR = 60;
const int HOURS_IN_DAY = 24;

int main()
{
	using namespace std;

	long long seconds = 0;

	cout << "Enter the number of seconds: ";
	cin >> seconds;
	cout << seconds << " seconds = ";
	cout << seconds / (SECS_IN_MINUTES * MINS_IN_HOUR * HOURS_IN_DAY) <<
		" days, ";
	cout << seconds / (SECS_IN_MINUTES * MINS_IN_HOUR) % HOURS_IN_DAY <<
		" hours, ";
	cout << seconds / SECS_IN_MINUTES % MINS_IN_HOUR << " minutes, ";
	cout << seconds % SECS_IN_MINUTES << " seconds\n";

	return 0;
}
