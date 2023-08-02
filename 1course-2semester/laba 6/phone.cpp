/*	Roman Sarchuk (KNMS-11) "Laba 6"
10. Write a function that calculates the cost of a phone call taking into account
discounts: if the duration of the conversation does not exceed 10 minutes, the tariff is UAH 1.2,
if the duration of the conversation exceeds 10 minutes, then the tariff is UAH 1.0. An argument
function is the duration of the conversation.  */

#include <iostream>
#include <Windows.h>

// Auxiliry functions
float cost(float time);
float getInput(void);

void main() {
    // Start (Part 1)
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    float time;

    // Starting information (Part 2)
    std::cout << "Roman Sarchuk (KNMS-11)\n\
A program using its own functions that calculates the cost of a\n\
telephone conversation, taking into account the discount\n\n";

    // Receiving data (Part 3)
    std::cout << "Talk time:\n";
    time = getInput();

    // Output result (Part 4)
    std::cout << "\n--- Info ---\n";
    std::cout << "Time:   " << time << " min" << "\n";
    std::cout << "Price:  " << cost(time) << " uah" << "\n";
    if (cost(time) == time)
        std::cout << "Tariff: " << 1 << " uah/min" << "\n";
    else
        std::cout << "Tariff: " << 1.2 << " uah/min" << "\n";
    std::cout << "------------\n\n";
}


float cost(float time) {
    return time <= 10 ? time * 1.2 : time;
}

float getInput(void) {
    float input = 0.0f;
    while (1) {
        std::cin >> input;
        if (std::cin) {
            if (input < 0)
                input = -input;
            break;
        }
        std::cerr << "! Enter the amount of min with a positive fractional or integer !\n";
        std::cin.clear();
        std::cin.ignore(32767, '\n');
    }
    return input;
}
