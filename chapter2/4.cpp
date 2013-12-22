/*
 * Write a program that asa the user to enter his or her age.
 * The program then should display age in months.
 *
 * Enter your age: 29
 *
 * Your age in months is 384
 */

int main()
{
	using namespace std;
	int age = 0;

	cout << "Enter your age: ";
	cin >> age;
	cout << "Your agee in months is " << age * 12 << endl;

	return 0;
}

