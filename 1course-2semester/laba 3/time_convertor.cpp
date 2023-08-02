/*	Roman Sarchuk (KNMS-11) "Laba 3"
11. Determine how many minutes a time interval measured in seconds has.  */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main() {
	// Start (Part 1)
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int sec = 0;
	float min;

	// Starting information (Part 2)
	puts("Roman Sarchuk (KNMS-11)	[ Converter ]");
	puts("A program that determines how many minutes a time interval has, measured in seconds\n");

	// Entering data (Part 3\4)
	puts("Time in seconds: ");	scanf_s("%d", &sec);

	// Âata conversion (Part 5)
	min = (float)sec / 60;	puts("");

	// Output result (Part 6)
	printf("Time in minutes: \n%.2f", min); puts("\n");

	// Ending (Part 7)
	system("PAUSE");
	return 0;
}
