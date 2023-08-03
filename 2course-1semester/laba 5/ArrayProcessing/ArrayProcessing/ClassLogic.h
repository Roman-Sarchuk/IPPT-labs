#pragma once
#include <ctime>
#include <math.h>
#include <stdlib.h>


class Logic
{
	int asize;
	int* arr;
public:
	Logic(int* valueArr, int arrN) {
		if (1 <= arrN <= 10)
		{
			int asize = arrN;
			float* arr = new float[asize];
			for (short i = 0; i < asize; i++)
			{
				arr[i] = valueArr[i];
			}
		}
	}

	~Logic() {
		delete[] arr;
	}

	void RandNum() {
		srand(time(NULL));
		for (short i = 0; i < asize; i++)
		{
			arr[i] = rand() % 201 - 100;
		}
	}

	void ChangeOnAbs() {
		for (short i = 0; i < asize; i++)
		{
			arr[i] = abs(arr[i]);
		}
	}

	int Calc() {
		int sum = 0;
		for (short i = 1; i < asize; i++)
		{
			sum += arr[i];
		}
		return sum;
	}

};
