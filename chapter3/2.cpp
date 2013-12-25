/*
 * Write a short program that asks for your height in feet adn inches and
 * your weight in pounds. (Use three variables to store the information.)
 * Have the program report your body mass index (BMI). To calculate the BMI,
 * first convert your height in feet and inches to your height in inches.
 * (1 foot = 12 inches). Then convert your height in inches to your height in
 * meters by multiplying by 0.0254. Then convert your weight in pounds into mass
 * in kilograms by dividing by 2.2. Finally, compute your BMI by dividing your
 * mass in kilograms by square of your height in meters. Use symbolic constants
 * to represent the various conversion factors.
 */

#include <iostream>

const int INCHES_IN_FOOT = 12;
const float INCHES_TO_METER_SCALE = 0.0254;
const float KILO_TO_POUNDS_SCALE = 2.2;

int main()
{
	using namespace std;

	float feet, inches, pounds, meters;

	cout << "Enter your heights in feet and inches: ";
	cin >> feet;
	cin >> inches;
	cout << "Enter your mass in pounds: ";
	cin >> pounds;

	meters = (feet * INCHES_IN_FOOT + inches) * INCHES_TO_METER_SCALE;

	cout << "Your body mass index (aka BMI): " <<
		(pounds / KILO_TO_POUNDS_SCALE) / (meters * meters) << endl;

	return 0;
}
