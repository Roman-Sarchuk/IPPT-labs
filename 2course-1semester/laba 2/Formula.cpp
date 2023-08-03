// Roman Sarchuk (KNMS-21)
#define _USE_MATH_DEFINES
#include <iostream>
#include <Windows.h>
#include <math.h>
using namespace std;


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "Roman Sarchuk (KNMS-21) ©\n\n";
	double a, x = 3.981 * pow(10, -2), y = -1.625 * pow(10, 3), z = 0.512;
	double part1, part2, part3;
	
	part1 = pow(2, -x);
	part2 = sqrt(x + pow(abs(y), 1 / 4));
	part3 = pow(pow(M_E, (x - 1) / sin(z)), 1 / 3);

	a = part1 * (part2 * part3);
	
	cout << part1 << " | " << part2 << " | " << part3 << endl;
	cout << "Result: " << a << endl;
}
