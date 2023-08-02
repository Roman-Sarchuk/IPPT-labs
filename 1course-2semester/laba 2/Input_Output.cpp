/*	Roman Sarchuk (KNMS-11) "Laba 2"
11.Write a program that asks the user for the quantity of the productin stock 
and the price per unit of the product and displays the cost of the product on the screen.  */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main()
{	
	// Start (Part 1)
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int quantity = 0;
	float price = 0.0f;

	// Starting information (Part 2)
	puts("Roman Sarchuk (KNMS-11)");
	puts("A program that asks the user for the quantity of the product");
	puts("in stock and the price per unit of the product and displays the cost of the product on the screen.\n");

	// Entering data (Part 3\4)
	puts("Quantity: ");	scanf_s("%d", &quantity);
	puts("Price: ");	scanf_s("%f", &price);	puts("");

	// Output result (Part 5)
	float result = quantity * price;
	printf("To be paid: %.2f", result); puts("\n");

	// Ending (Part 6)
	system("PAUSE");
	return 0;
}
