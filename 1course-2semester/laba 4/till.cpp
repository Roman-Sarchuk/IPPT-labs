/*	Roman Sarchuk (KNMS-11) "Laba 4"
1. Write a program for calculating the purchase price, taking into account the discount. 
A 5% discount is providedif the purchase price exceeds UAH 50, 7% - if the purchase price 
exceeds UAH 100. When the purchase price is less than UAH 50. no discount is given.  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main() {
	// Start (Part 1)
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	float initial_pay(0.0f), price, pay, discount;
	char run('y');

	// Starting information (Part 2)
	puts("Roman Sarchuk (KNMS-11)	[ till ]");
	puts("The program for calculating the purchase price, including the discount.\n");

	// Entering data (Part 3)
	puts("Goods:");
	while (1) {
		if (run == 'y' || run == 'Y') {
			run = ' ';
			scanf("%f", &price);
			initial_pay += price;
		}
		else {
			puts("Enter: Y or N");
		}
		printf("Continue? (Y/N) ");    scanf(" %c", &run);
		if (run == 'n' || run == 'N')
			break;
	}
	printf("\nSum: %.2f грн\n", initial_pay);

	// Data checking (Part 4)
	if (initial_pay >= 100) {
		discount = initial_pay * 0.07f;
		pay = initial_pay - discount;
		printf("Discount 7%% -> %.2f грн\n\n", discount);
	}
	else if (initial_pay >= 50) {
		discount = initial_pay * 0.05f;
		pay = initial_pay - discount;
		printf("Discount 5%% -> %.2f грн\n\n", discount);
	}
	else {
		pay = initial_pay;
		puts("Discount isn't\n");
	}

	// Output data (Part 5)
	printf("To pay: %.2f uah\n\n", pay);

	// Ending (Part 6)
	system("PAUSE");
	return 0;
}
