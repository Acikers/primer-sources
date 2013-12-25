/*
 * Write a program that asks the user to enter a latitude in degrees, minutes,
 * and seconds and that then displays the latitude in decimal format. There are
 * 60 seconds of arc to a minute and 60 minutes of arc to a degree; represent
 * these values with symbolic constants. You should use a separate variable for
 * each input value. A sample run should look like this:
 *
 * Enter a latitude in degrees, minutes, and seconds:
 * First, enter the dergrees: 37
 * Next, enter minutes of arc: 51
 * Finally, enter the seconds of arc: 19
 * 37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
 */

#include <iostream>

const int SECS_TO_MIN = 60;
const int MIN_TO_DEGREE = 60;

int main()
{
	using namespace std;

	int degrees, minutes, seconds;
	float result;

	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of ard: ";
	cin >> seconds;

	result = degrees + (minutes + static_cast<float>(seconds) / SECS_TO_MIN) / MIN_TO_DEGREE;
	cout << degrees << " degrees, " << minutes << " minutes," <<
		seconds << "seconds = " << result << endl;

	return 0;
}
