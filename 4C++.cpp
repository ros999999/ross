// ConsoleApplication7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include "stdio.h"
#include <stdlib.h>
#include<conio.h>
#include "windows.h"
using namespace std;
const int size = 5;


class Matrix
{
private:
	int Matrix[size][size];
public:
	void  InputMatrixFromConsole();
	void OutputMatrixToConsole();
	void BubbleSortRows();            //by ascending
	void  Outputresult();
	//int Product();
	double ArithmeticMean;
};

void Matrix::InputMatrixFromConsole()
{
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
		{
			cout << "[" << i + 1 << "][" << j + 1 << "] =";
			cin >> Matrix[i][j];
		}
}


void Matrix::OutputMatrixToConsole()
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << "\t" << Matrix[i][j];
		}
		cout << endl;
	}
}

void Matrix::BubbleSortRows()
{
	for (int i = 0; i < size; i++)
	{
		int max = 0;
		for (int j = 0; j < size - 1; j++)
		{
			max = j;
			for (int k = j + 1; k < size; k++)
			{
				if (Matrix[i][k] < Matrix[i][max])
				{
					max = k;
				}
			}
			int temp = Matrix[i][max];
			Matrix[i][max] = Matrix[i][j];
			Matrix[i][j] = temp;
		}
	}
}
void Matrix::Outputresult()
{
	double product = 1;
	double result;
	int count = 0;
	for (int j = 0; j < size - 1; j++)
	{
		result = 0;
		count = 0;
		for (int i = j + 1; i < size; i++)
		{
			result = result + Matrix[i][j];
			count++;
		}
		ArithmeticMean = result / count;
		cout << "Arithmetic Mean: " << ArithmeticMean << endl;
		product = product * ArithmeticMean;
	}
	cout << "Product: " << product << endl;


}



int main()
{
	Matrix matrix;
	matrix.InputMatrixFromConsole();
	cout << "Matrix" << endl;
	matrix.OutputMatrixToConsole();
	matrix.BubbleSortRows();
	cout << "Sorted matrix" << endl;
	matrix.OutputMatrixToConsole();
	cout << "Averages in columns" << endl;
	matrix.Outputresult();



	system("pause");
	return 0;
}

