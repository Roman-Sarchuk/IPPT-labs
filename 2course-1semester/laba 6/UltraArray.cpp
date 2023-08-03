// Roman Sarchuk (KNMS-21)
#include <iostream>
#include <time.h>
using namespace std;


class Logic {
    float** arr;
    float** arrt;
    int elem;

public:
    Logic() {
        cout << "Number of Element: ";
        cin >> elem;
        arr = new float* [elem];
        for (short i = 0; i < elem; i++)
        {
            arr[i] = new float[elem];
        }
    }
    ~Logic() {
        for (short i = 0; i < elem; i++)
        {
            delete[] arr[i];
        }
        delete[] arr;
    }

    void FillArray(bool rnd=false, bool symt=true) {
        srand(time(NULL));
        if (!rnd)
            cout << ":: Input Element ::" << endl;
        for (short i = 0; i < elem; i++)
        {
            for (short j = 0; j < elem; j++)
            {
                if (!rnd)
                    cin >> arr[i][j];
                else 
                {
                    if (!symt)
                        arr[i][j] = rand() % 10;
                    else
                    {
                        for (short i = 0, k = elem - 1; i < elem - 1; i++, k--)
                        {
                            //arr[i][k] = rand() % 10;
                            for (short j = 0, c = k; j < k; j++, c--)
                            {
                                arr[i][j] = rand() % 10;
                                arr[i + c][k] = arr[i][j];                                   
                            }
                        }
                        //arr[elem-1][0] = rand() % 10;
                    }
                }
            }
        }
        cout << endl;
    }

    void PrintArray() {
        cout << ":: Your Array ::" << endl;
        for (short i = 0; i < elem; i++)
        {
            for (short j = 0; j < elem; j++)
            {
                cout << arr[i][j] << ' ';
            }
            cout << endl;
        }
    }

    bool CheckSymetrics() {
        for (short i = 0, k = elem - 1; i < elem - 1; i++, k--)
        {
            for (short j = 0, c = k; j < k; j++, c--)
            {
                if (arr[i][j] != arr[i + c][k])
                    return false;
            }
        }
        return true;
    }

    void PrintResult(bool symt) {
        cout << "Symetrics: ";
        if (symt)
            cout << "TRUE" << endl;
        else
            cout << "FALSE" << endl;
    }
};

class Question {
    bool answ1, answ2;

public:
    Question() {
        cout << "Fill Auto (1-Y/0-N): ";
        cin >> answ1;
        if (answ1)
        {
            cout << "Symt. array (1-Y/0-N): ";
            cin >> answ2;
        }
        cout << endl;
    }

    bool getAnsw1() {
        return answ1;
    }

    bool getAnsw2() {
        return answ2;
    }
};


int main()
{
    cout << "Roman Sarchuk (KNMS-21)\n\n";
    Logic log;
    Question qst;
    log.FillArray(qst.getAnsw1(), qst.getAnsw2());
    log.PrintArray();
    log.PrintResult(log.CheckSymetrics());
}
