// Roman Sarchuk (KNMS-21)
#define _USE_MATH_DEFINES
#include <iostream>
#include <Windows.h>
#include <math.h>
using namespace std;


class Logic
{
	float a = 0.1f, b = 1.f, h = 0.1f;
	int size = 0, n;
	long double *tableY, *tableS, *tableYS;

	int Factorial(int n) {
		if (n == 0)
			return 1;
		else
			return n * Factorial(n - 1);
	};
	
	void DefineY() {
		int k = 0;
		for (float x = a; x <= b; x += h, k++) {
			tableY[k] = (pow(M_E, x) + pow(M_E, -x)) / 2;
		}
	};

	void DefineS() {
		long double s;
		int i = 0;
		for (float x = a; x <= b; x += h, i++) {
			s = 0.f;
			for (int k = 0; k <= n; k++) {
				s += pow(x, 2 * k) / Factorial(2 * k);
			}
			tableS[i] = s;
		}
	};

	void DifficultAbsYS() {
		for (int i = 0; i < size; i++) {
			tableYS[i] = tableY[i] - tableS[i];
		}
	};

public:

	Logic(int n) {
		this->n = n;
		for (float x = a; x <= b; x += h) {
			size++;
		}
		tableY = new long double[size];
		tableS = new long double[size];
		tableYS = new long double[size];
	};

	~Logic() {
		delete[] tableY;
		delete[] tableS;
		delete[] tableYS;
	};

	void Start() {
		DefineY();
		DefineS();
		DifficultAbsYS();
	}

	void OutputTable() {
		cout << "-------------------------------------------------------------------------" << endl;
		for (int i = 0; i < size; i++) {
			cout << "Y = " << tableY[i] << "\t|\t";
			cout << "S = " << tableS[i] << "\t|\t";
			cout << "|Y - S| = " << tableYS[i] << endl;
		}
		cout << "-------------------------------------------------------------------------" << endl;
	};

};


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "Roman Sarchuk (KNMS-21) ©\n\n";

	int n;
	cout << "Enter 'n' :: ";
	cin >> n;

	Logic log(n);
	log.Start();
	log.OutputTable();
}
