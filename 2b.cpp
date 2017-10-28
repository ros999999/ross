// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include"stdio.h"
#include "math.h"
int main(void)
{
	double lowerBound;
	printf_s("enter lower bound: ");
	scanf_s("%lf", &lowerBound);
	double x = lowerBound;

	double upBound;
	printf_s("enter upper bound: ");
	scanf_s("%lf", &upBound);



	double tabulationStep;
	printf_s("enter a step: ");
	scanf_s("%lf", &tabulationStep);
	double d;
	printf_s("d:");
	scanf_s("%lf", &d);
	double result = 0;

	double n = 1;


	for (x; x < upBound; x += tabulationStep)
	{
		double dodanok = 0;
		n = 1;
		result = 0;
		while (dodanok < d)
		{
			if (x == 1)
			{
				break;
			}
			dodanok = pow(x - 1, (2 * n + 1)) / (2 * n + 1)*pow(x + 1, (2 * n + 1));

			result = dodanok + result;
			n++;
		}
		result *= 2;
		printf("For %.2lf, the result = %.8lf\n", x, result);
	}
scanf_s("%s");
    return 0;
}

	

