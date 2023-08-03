// Roman Sarchuk (KNMS-21)
#define _USE_MATH_DEFINES
#include <iostream>
#include <Windows.h>
#include <math.h>
using namespace std;


class Logic
{
	float z, x, y, d, c;

	void InputNum() {
		cout << "Enter number 'z' :: ";
		cin >> z;
		cout << "Enter number 'B' :: ";
		cin >> d;
		cout << "Enter number 'C' :: ";
		cin >> c;
	};

	void DefineX() {
		if (z < 1)
			x = pow(z, 2) + 1;
		else if (z >= 1)
			x = z - 1;
		cout << "X = " << x << endl;
	};

	void DefineY() {
		float part1, part2, part3;
		part1 = d * tan(x) * pow(M_E, pow(sin(x), 3));
		part2 = c * log(x + 1);
		part3 = sqrt(x);
		y = (part1 + part2) / part3;
		cout << "Y = " << y << endl;
	};

public:

	void Start() {
		cout << "--- calculation ---" << endl;
		InputNum();
		DefineX();
		DefineY();
		cout << "--- PERFORMED ---" << endl;
	};

};


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "Roman Sarchuk (KNMS-21) ©\n\n";
	Logic log;

	log.Start();

}
