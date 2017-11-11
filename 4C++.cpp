// ConsoleApplication4.cpp: определяет точку входа для консольного приложения.
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
const int n = 5;


class Matrix
{
private:
	int M[n][n];
public:
	void InputMatrix();
	void OutputMatrix();
	void Sort();
	void  solution();
	//int Product();
	double ArithmeticMean;
};

void Matrix::InputMatrix()
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "[" << i + 1 << "][" << j + 1 << "] =";
			cin >> M[i][j];
		}
}


void Matrix::OutputMatrix()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "\t" << M[i][j];
		}
		cout << endl;
	}
}

void Matrix::Sort()
{
	for (int i = 0; i < n; i++)
	{
		int max = 0;
		for (int j = 0; j < n - 1; j++)
		{
			max = j;
			for (int k = j + 1; k < n; k++)
			{
				if (M[i][k] < M[i][max])
				{
					max = k;
				}
			}
			int temp = M[i][max];
			M[i][max] = M[i][j];
			M[i][j] = temp;
		}
	}
}
void Matrix::solution()
{
	double product = 1;
	double result;
	int count = 0;
	for (int j = 0; j < n - 1; j++)
	{
		result = 0;
		count = 0;
		for (int i = j + 1; i < n; i++)
		{
			result = result + M[i][j];
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
	matrix.InputMatrix();
	cout << "Matrix" << endl;
	matrix.OutputMatrix();
	matrix.Sort();
	cout << "Sorted matrix" << endl;
	matrix.OutputMatrix();
	cout << "Averages in columns" << endl;
	matrix.solution();



	system("pause");
	return 0;
}

