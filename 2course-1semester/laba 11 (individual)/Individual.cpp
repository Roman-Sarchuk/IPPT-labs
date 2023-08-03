#include <iostream>
using namespace std;


class INT
{
    int value;

public:
    INT(int value=0) {
        this->value = value;
    }

    int GetNum() {
        return value;
    }

    // Adding
    int Add(int num1, int num2) {
        return num1 + num2;
    }
    int Add(int num) {
        value += num;
        return value;
    }

    // Subtraction
    int Sub(int num1, int num2) {
        return num1 - num2;
    }
    int Sub(int num) {
        value -= num;
        return value;
    }

    // Multiplication
    int Mult(int num1, int num2) {
        return num1 + num2;
    }
    int Mult(int num) {
        value *= num;
        return value;
    }

    // Division
    int Div(int num1, int num2) {
        return num1 / num2;
    }
    int Div(int num) {
        value /= num;
        return value;
    }
};


int main()
{
    INT copyint1(7);
    INT copyint2(-3);
    INT copyint3;

    cout << "::: INT first :::" << endl;
    cout << "int1 = " << copyint1.GetNum() << endl;
    cout << "int2 = " << copyint2.GetNum() << endl;
    cout << "int3 = " << copyint3.GetNum() << endl << endl;

    cout << "::: INT add :::" << endl;
    cout << "39 + 10 = " << copyint1.Add(39, 10) << endl;
    cout << "int2 + 38 = " << copyint2.Add(38) << endl << endl;

    cout << "::: INT sub :::" << endl;
    cout << "12 - 10 = " << copyint1.Sub(16, 10) << endl;;
    cout << "int2 - 5 = " << copyint2.Sub(5) << endl << endl;

    cout << "::: INT mult :::" << endl;
    cout << "int1 * 5 = " << copyint1.Mult(5) << endl;
    cout << "2 * 12 = " << copyint2.Mult(2, 12) << endl << endl;

    cout << "::: INT div :::" << endl;
    cout << "369 / 3 = " << copyint1.Div(369, 3) << endl;
    cout << "int2 / (-5) = " << copyint2.Div(-5) << endl << endl;

    cout << "::: INT now :::" << endl;
    cout << "int1 = " << copyint1.GetNum() << endl;
    cout << "int2 = " << copyint2.GetNum() << endl;
    cout << "int3 = " << copyint3.GetNum() << endl;
}
