/*	Roman Sarchuk (KNMS-11) "Laba 5"
1. Write a program that combines two ordered growth
(by alphabet) one -dimensional array of Latin alphabet
symbols in one, also arranged in growth.   */

#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int const SIZE_ARR = 50;
int const SIZE_ABC = 52;
char ALPHABET[SIZE_ABC]{ 'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'E', 'e', 'F', 'f', 'G', 'g', 'H', 'h', 'I', 'i', 'J', 'j', 'K', 'k', 'L', 'l', 'M', 'm', 'N', 'n', 'O', 'o', 'P', 'p', 'Q', 'q', 'R', 'r', 'S', 's', 'T', 't', 'U', 'u', 'V', 'v', 'W', 'w', 'X', 'x', 'Y', 'y', 'Z', 'z' };

string SortArray(char arr[], int const size);

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "Roman Sarchuk (KNMS-11)\n\
A program that combines two ordered growth (by alphabet) of\n\
one-dimensional arrays of Latin alphabet's alphabet in one,\n\
also arranged in growth.\n\n";

    char arr1[SIZE_ARR], arr2[SIZE_ARR], arr0[SIZE_ARR *2];
    int size_arr1 = 0, size_arr2 = 0, size_arr0 = 0;

    // Entering a symbol set
    cout << "Enter 2 Latin letters without spaces!\n";
    cout << "For instance: rSofmdsSrvmsa\n";
    cout << "ARR1:\n";
    cin >> arr1;
    cout << "ARR2:\n";
    cin >> arr2;
    
    // Array processing
    /*Processing arr1 and arr2*/
    while (arr1[size_arr1] != '\0') {
        size_arr1++;
    }
    size_arr1++;
    string sort1 = SortArray(arr1, size_arr1);
    while (arr2[size_arr2] != '\0') {
        size_arr2++;
    }
    size_arr2++;
    string sort2 = SortArray(arr2, size_arr2);

    /*Processing arr0*/
    for (int i = 0; i < size_arr1; i++) {
        arr0[i] = sort1[i];
        size_arr0++;
    }
    for (int i = 0, j = size_arr1; i < size_arr2; i++, j++) {
        arr0[j] = sort2[i];
        size_arr0++;
    }
    size_arr0--;
    string sort0 = SortArray(arr0, size_arr0);

    cout << size_arr1 << endl;
    cout << size_arr2 << endl;
    cout << size_arr0 << endl;

    // Output result
    cout << "\nDATA [Sort]:\n";
    cout << "Arr1: \t" << arr1 << endl;
    cout << "Arr2: \t" << arr2 << endl;
    cout << "Arr1+2: " << arr0 << endl;
    cout << "\nRESULT:\n";
    cout << "Sort Arr: " << sort0 << endl;
}

string SortArray(char arr[], int const size) {
    char sort[SIZE_ARR];
    int cycle=0;
    for (int i = 0; i < SIZE_ABC; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[j] == ALPHABET[i]) {
                sort[cycle] = arr[j];
                cycle++;
            }
        }
    }
    sort[cycle] = '\0';
    return sort;
}
