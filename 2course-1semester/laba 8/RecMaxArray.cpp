// Roman Sarchuk (KNMS-21)
#include <iostream>
using namespace std;


class Logic {
    short size = 0;
    int* arr;

public:
    Logic() {
        cout << "Enter arr size: ";
        cin >> size;
        arr = new int[size];
        cout << ":: Fill arr ::" << endl;
        for (short i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        cout << ":: :::: ::: ::" << endl;
    }

    int GetRecMaxElem(short n=-1) {
        if (n == size-1) 
            return arr[n+1];
        return max(arr[n+1], GetRecMaxElem(n+1));
    }

    int GetOrdMaxElem() {
        int maxElm = arr[0];
        for (short i = 1; i < size; i++)
        {
            if (arr[i] > maxElm)
                maxElm = arr[i];
        }
        return maxElm;
    }
};


int main()
{
    Logic log;
    cout << "Recursion: " << log.GetRecMaxElem() << endl;
    cout << "Ordinary:  " << log.GetOrdMaxElem() << endl;
}
