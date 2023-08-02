/*	Roman Sarchuk (KNMS-11) "Laba 8"
11. Replace all little letters on big. */
#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

void logic(void);
char change(char ch);
void info(void);

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "Roman Sarchuk (KNMS-11)\n\
A program that replaces all small letters with large.\n\n";
    logic();
}


void logic(void) {
    string ch;
    cout << "(Letter will be reading to syblol 'space' or 'enter')\nEnter a symbol set:\n";
    cin >> ch;
    cout << "Result:\n";
    int i = 0;
    while (ch[i] != '\0') {
        cout << change(ch[i]);
        i++;
    }
}

// Replace with big letter
char change(char ch) {
    if ((ch >= 92 && ch <= 122) || (ch >= -32 && ch <= -1))
        return ch -= 32;
    else if (ch == -70 || ch == -65 || ch == -72)   // є: -70 ; ї: -65 ; ё: -72
        return ch -= 16;                            // Є: -86 ; Ї: -81 ; Ё: -88
    else if (ch == -77)     // і: -77
        return ch - 1;      // І: -78
    else if (ch == -76) // ґ: -76
        return ch - 15; // Ґ: -91
    else
        return ch;
}

// For viewing symbol number [ auxiliary function ]
void info(void) {
    char ch;
    while (true)
    {
        cin >> ch;
        cout << ch << " = " << ch + 0 << endl;
    }
}