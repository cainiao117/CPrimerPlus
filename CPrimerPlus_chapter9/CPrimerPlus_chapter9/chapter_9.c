#define _CRT_SECURE_NO_WARNINGS 1

#include "head.h"

double Min(double a, double b)
{
	return (a < b) ? a : b;
}

void chline(char ch, int i, int j)
{
	for (int k = 0; k < j - 1; k++)
	{
		printf("\n");
	}
	for (int k = 0; k < i - 1; k++)
	{
		printf(" ");
	}
	printf("%c\n", ch);
}

void chline1(char ch, int i, int j)
{
	for (int a = 0; a < j; a++)
	{
		for (int b = 0; b < i; b++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
}

double average(double a, double b)
{
	return 1 / ((1 / a + 1 / b) / 2);
}

void large(double* pa, double* pb)
{
	*pa = (*pa > *pb) ? *pa : *pb;
	*pb = *pa;
}

void fuc(double* pa, double* pb, double* pc)
{
	double arr[3];
	arr[0] = *pa;
	arr[1] = *pb;
	arr[2] = *pc;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				double temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	*pa = arr[0];
	*pb = arr[1];
	*pc = arr[2];

}

double Power(double x, int n)
{
	if (0 == x)
	{
		if (0 == n)
		{
			printf("0的0次幂未定义\n");
			return 1;
		}
		return 0;
	}
	if (0 == n)
	{
		return 1;
	}
	
	double result = 1;
	
	if (n < 0)
	{
		for (int i = 0; i > n; i--)
		{
			result /= x;
		}
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			result *= x;
		}
	}
	return result;
}

double Power1(double x, int n)
{
	if (0 == x)
	{
		if (0 == n)
		{
			printf("0的0次幂未定义\n");
			return 1;
		}
		return 0;
	}
	if (0 == n)
	{
		return 1;
	}

	if (n < 0)
	{
		return 1/Power1(x,-n);
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			return x*Power1(x, n - 1);
		}
	}
}

void to_base_n(unsigned int a, unsigned int n)
{
	if (a > n)
	{
		printf("%d", a%n);
		return to_base_n(a / n, n);
	}
	printf("%d", a%n);
}

//int Fibonacci(unsigned int n)
//{
//	if (n ==0)
//	{
//		return 0;
//	}
//	if (n == 1)
//	{
//		return 1;
//	}
//	return Fibonacci(n - 1) + Fibonacci(n - 2);
//}

int Fibonacci(unsigned int n)
{
	unsigned int a = 0, b = 1;
	if (1 == n)
	{
		return a;
	}
	if (2 == n)
	{
		return b;
	}

	unsigned result;
	for (unsigned int i = 3; i <= n; i++)
	{
		result = a + b;
		a = b;
		b = result;
	}
	return result;

}


