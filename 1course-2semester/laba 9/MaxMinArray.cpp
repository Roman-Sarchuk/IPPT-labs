/*	Roman Sarchuk (KNMS-11) "Laba 9"
11. Write a program that displays the maximum value of the maximum screen
    minimum elements of a two -dimensional array and their indexes.  */

/* !!! Auxiliary function(extra func) - don't have an important role for the laboratory itself, 
   !!! and written for better perception, verification or relief of certain processes 
   !!! in the code and used when desired, to check or show */

#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

void FillArr(int** const arr, int const rows, int const cols);  
void Max(int** const arr, int const rows, int const cols);
void Min(int** const arr, int const rows, int const cols);
void OutputArr(int** const arr, int const rows, int const cols);    // extra func
void RandFillArr(int** const arr, int const rows, int const cols);  // extra func

int main()
{
    // size array
    int rows = 2, cols = 0;
    cout << "Elements for two array: ";
    cin >> cols;
    cout << endl;

    // init array
    int **arr = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int [cols];
    }
    
    // filling array
    FillArr(arr, rows, cols);   // FillArr can be replaced with RandFillArr;
                                // in order to automatically enter data

    // output array
    //OutputArr(arr, rows, cols);

    // Max & Min
    Max(arr, rows, cols);
    cout << endl;
    Min(arr, rows, cols);
    cout << endl;

    // delet array
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}


void FillArr(int** const arr, int const rows, int const cols) {
    cout << "Input " << cols << " int elements:\n";
    for (int i = 0; i < rows; i++) {
        cout << "Array " << i + 1 << ":\n";
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
    cout << endl;
}

void Max(int** const arr, int const rows, int const cols) {
    int max = arr[0][0], i_max = 0, j_max = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
                i_max = i;
                j_max = j;
            }
        }
    }
    cout << "Max[" << i_max << "][" << j_max << "]: " << max;
}

void Min(int** const arr, int const rows, int const cols) {
    int min = arr[0][0], i_min = 0, j_min = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
                i_min = i;
                j_min = j;
            }
        }
    }
    cout << "Min[" << i_min << "][" << j_min << "]: " << min;
}

// Auxiliary function [Output the values of the all array]
void OutputArr(int** const arr, int const rows, int const cols) {
    cout << "You entered:\n";
    for (int i = 0; i < rows; i++) {
        cout << "Array " << i + 1 << ":\n";
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << "\t";
            if (cols <= 5 && j+1 == cols)
                cout << '\n';
            else if ((j+1) % 5 == 0)
                cout << '\n';
        }
        cout << endl;
    }
}

// Auxiliary function [Filling the array by random numbers(auto-filling)]
void RandFillArr(int** const arr, int const rows, int const cols) {
    srand(time(NULL));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand()%101; // From 0 to 100
        }
    }
}