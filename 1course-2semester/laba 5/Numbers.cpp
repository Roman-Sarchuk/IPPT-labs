/*	Roman Sarchuk (KNMS-11) "Laba 5"
1. Write a program that calculates the arithmetic mean of a sequence of real numbers,
which are entered from the keyboard. After entering the last number, the program should also
output the largest and smallest sequence numbers.  */

#include <iostream>
#include <Windows.h>

// Auxiliary functions
float arth_mean(float num[], int len);  // Arithmetic mean
float max_num(float num[], int len);    // Maximum number
float min_num(float num[], int len);    // Minimum number


int main()
{
    // Start (Part 1)
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    const int num_range = 500;
    int count_num = 0;
    float num[num_range];

    // Starting information (Part 2)
    std::cout << "Roman Sarchuk (KNMS-11)\n\
The program calculates the arithmetic mean of the sequence of real\n\
numbers that are entered from the keyboard. After entering the last number,\n\
the program also finds the largest and smallest number of the sequence.\n\n";

    // Entering data (Part 3)
    std::cout << "Enter real numbers\n\
to finish, enter a symbol!\n";
    std::cout << "--- Start ---\n";
    do {
        std::cin >> num[count_num];
        count_num++;
    } while (std::cin.good() && count_num < num_range);
    std::cout << "---- End ----\n\n";

    // Information (Part 4)
    std::cout << "--- Info ---\n";
    std::cout << "Arithmetic mean: " << arth_mean(num, count_num) << "\n";
    std::cout << "Maximum number:  " << max_num(num, count_num) << "\n";
    std::cout << "Minimum number:  " << min_num(num, count_num) << "\n";
    std::cout << "------------\n\n";

    // Ending (Part 5)
    return 0;
}


float arth_mean(float num[], int len) {
    float res = 0;
    for (int i = 0; i < len - 1; i++)
        res += num[i];
    return res / 2;
}

float max_num(float num[], int len) {
    float max = num[0];
    for (int i = 0; i < len - 1; i++)
        if (num[i] > max)
            max = num[i];
    return max;
}

float min_num(float num[], int len) {
    float min = num[0];
    for (int i = 0; i < len - 1; i++)
        if (num[i] < min)
            min = num[i];
    return min;
}
