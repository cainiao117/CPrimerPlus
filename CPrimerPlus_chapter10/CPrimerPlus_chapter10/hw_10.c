#define _CRT_SECURE_NO_WARNINGS 1

#include "head.h"

void hw_1(void)
{
	float rain[YEARS][MONTHS] = {
		{ 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
		{ 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 },
		{ 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
		{ 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
		{ 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 }
	};

	float years_sum = 0;
	printf("Year             RAINFALL (inches)\n");
	for (int i = 0; i < YEARS; i++)
	{
		float sum = 0;
		for (int j = 0; j < MONTHS; j++)
		{
			sum += *(*(rain+i) + j);
		}
		printf("%d              %.1f\n", 2010 + i, sum);
		
		years_sum += sum;
	}

	printf("The yearly average is %.1f inches.\n",years_sum/YEARS);

	printf("MONYHLY AVERAGES:\n");

	printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

	for (int i = 0; i < MONTHS; i++)
	{
		float sum = 0;
		for (int j = 0; j < YEARS; j++)
		{
			sum += *(*(rain+j)+i);
		}
		printf("%.1f  ",sum/YEARS);
	}
}

copy_arr(double target[NUM], double source[NUM], int n)
{
	for (int i = 0; i < n; i++)
	{
		target[i] = source[i];
	}
}

copy_ptr(double* ptarget, double* psource, int n)
{
	for (int i = 0; i < n; i++)
	{
		*(ptarget + i) = *(psource + i);
	}
}

copy_ptrs(double* ptarget, double* psource1, double* psource2)
{
	for (double* p = psource1; p < psource2; p++)
	{
		*ptarget++ = *p;
	}
}

int hw_3(int* arr, int n)
{
	int max = *arr;
	for (int i = 0; i < n; i++)
	{
		if (*(arr + i)>max)
		{
			max = *(arr + i);
		}
	}
	return max;
}

int hw_4(double* arr, int n)
{
	int max=0;
	int i;
	for (i = 0; i < n; i++)
	{
		if (*(arr + i)>max)
		{
			max = i;
		}
	}
	return max;
}

double hw_5(double* arr, int n)
{
	double max = *arr;
	double min = *arr;
	for (int i = 0; i < n; i++)
	{
		if (*(arr + i)>max)
		{
			max = *(arr + i);
		}
		if (*(arr + i) < min)
		{
			min = *(arr + i);
		}
	}
	return max - min;
}

void hw_6(double* arr, int n)
{
	int left = 0;
	int right = n-1;
	while (left <= right)
	{
		double temp = *(arr + left);
		*(arr + left) = *(arr + right);
		*(arr + right) = temp;
		left++;
		right--;
	}
}

void copy(int row, int col, double source[][5], double target[][5])
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			target[i][j] = source[i][j];
		}
	}
}

void show(int row, int col, double target[][5])
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%6.2lf  ", target[i][j]);
		}
		printf("\n");
	}
}

void add(int* psource1, int* psource2, int* ptarget, int n)
{
	for (int i = 0; i < n; i++)
	{
		*(ptarget + i) = *(psource1 + i) + *(psource2 + i);
	}
}

void redouble(int arr[][5], int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = 2 * arr[i][j];
		}
	}
}

void redouble2(int(*p)[5], int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			*(*(p + i) + j) *= 2;
		}
	}
}

void Show(int arr[][5], int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
}

float sum(float(*rain)[MONTHS], int n)
{
	float Sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < MONTHS; j++)
		{
			Sum =Sum + *(*(rain + i)+j);
		}
	}
	return Sum/n;
}

void Print(float(*rain)[MONTHS], int n)
{
	for (int i = 0; i < MONTHS; i++)
	{
		float sum = 0;
		for (int j = 0; j < n; j++)
		{
			sum += *(*(rain + j) + i);
		}
		printf("%.1f  ", sum / YEARS);
	}
}

void Init(double(*p)[5], int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("please enter the number of row %d,col %d:", i + 1, j + 1);
			scanf("%lf", *(p + i) + j);
			/*scanf("%lf", &p[i][j]);*/
		}
	}
}

double cal(double(*p)[5])
{
	double sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += *(*p + i);
	}
	return sum / 5;
}

double Cal(double(*p)[5], int row)
{
	double sum = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			sum += *(*(p + i) + j);
		}
	}
	return sum / (5 * row);
}

double Max(double(*p)[5], int row)
{
	double max = *(*p);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (*(*(p + i) + j)>max)
			{
				max = *(*(p + i) + j);
			}
		}
	}
	return max;
}