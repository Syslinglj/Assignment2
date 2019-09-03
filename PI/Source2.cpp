#include <iostream>
using namespace std;

int main()
{
	const double CONST_PI = 3.14;
	int radius = 5;
	double area;
	double circum;

	circum = 2 * CONST_PI * radius;
	area = CONST_PI * pow(radius, 2);
	cout << "The circumference is " << circum << endl;
	cout << "The area is " << area << endl;

	return 0;
}