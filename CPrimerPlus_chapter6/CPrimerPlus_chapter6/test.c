#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void hw_1(void);
void hw_2(void);
void hw_3(void);
void hw_4(void);
void hw_5(void);
void hw_6(void);
void hw_7(void);
void hw_8(void);
void hw_9(void);
void hw_10(void);
float cal(float a, float b);
void hw_11(void);
void hw_12(void);
void hw_13(void);
void hw_14(void);
void hw_15(void);
void hw_16(void);
void hw_17(void);
void hw_18(void);

int main()
{
	/*hw_1();*/
	/*hw_2();*/
	/*hw_3();*/
	/*hw_4();*/
	/*hw_5();*/
	/*hw_6();*/
	/*hw_7();*/
	/*hw_8();*/
	/*hw_9();*/
	/*hw_10();*/
	/*hw_11();*/
	/*hw_12();*/
	/*hw_13();*/
	/*hw_14();*/
	/*hw_15();*/
	/*hw_16();*/
	/*hw_17();*/
	hw_18();
	return 0;
}

void hw_1(void)
{
	char arr[26];
	int i;
	for (i = 0; i < 26; i++)
	{
		arr[i] = 'a' + i;
	}
	for (i = 0; i < 26; i++)
	{
		printf("%c ", arr[i]);
	}
}

void hw_2(void)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf("$");
		}
		printf("\n");
	}
}

void hw_3(void)
{
	int i;
	for (i = 0; i < 6; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf("%c", 'F' - j);
		}
		printf("\n");
	}
}

void hw_4(void)
{
	int i, j;
	int count = 0;
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf("%c", 'A' + count);
			count++;
		}
		printf("\n");
	}
}

void hw_5(void)
{
	char ch;
	printf("please enter a char:");
	scanf("%c", &ch);
	int i, j;
	for (i = 0; i < ch - 'A'+1; i++)
	{
		for (j = 0; j < ch - 'A'-i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < i + 1; j++)
		{
			printf("%c", 'A' + j);
		}
		for (j = 0; j < i; j++)
		{
			printf("%c", 'A' + i - 1 - j);
		}
		printf("\n");
	}
}

void hw_6(void)
{
	int up, down;
	printf("pleas enter two number:(number1>number2)>>>");
	scanf("%d%d", &up, &down);
	for (int i = down; i <= up; i++)
	{
		printf("%10d %10d %10d\n", i, i*i, i*i*i);
	}
}

void hw_7(void)
{
	char str[100];
	printf("please enter a word:");
	scanf("%s", str);
	for (int i = strlen(str); i >= 0; i--)
	{
		printf("%c", str[i]);
	}
}

void hw_8(void)
{
	float a, b;
	printf("please enter two numbers:");
	while (scanf("%f%f", &a, &b) == 2)
	{
		printf("%f\n", (a - b) / (a*b));
		printf("please enter another two numbers:");
	}
	printf("Done!\n");
}

void hw_9(void)
{
	float a, b;
	printf("please enter two numbers:");
	while (scanf("%f%f", &a, &b) == 2)
	{
		float result = cal(a, b);
		printf("result==%f\n", result);
		printf("please enter another two numbers:");
	}
	printf("Done!\n");
}

float cal(float a, float b)
{
	return (a - b) / (a*b);
}

void hw_10(void)
{
	int lower, upper;
	printf("Enter lower and upper integer limits:");
	scanf("%d%d", &lower, &upper);
	while (lower < upper)
	{
		int sum = 0;
		for (int i = lower; i <= upper; i++)
		{
			sum += i*i;
		}
		printf("The sums of the squares from %d to %d is %d\n", lower*lower, upper*upper, sum);
		printf("Enter next set of limits:");
		scanf("%d%d", &lower, &upper);
	}
	printf("Done!\n");
}

void hw_11(void)
{
	int arr[8];
	for (int i = 0; i < 8; i++)
	{
		printf("please enter a number(%d):\n", i + 1);
		scanf("%d", &arr[i]);
	}
	for (int i = 7; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void hw_12(void)
{
	int num;
	printf("please enter a number:");
	scanf("%d", &num);

	double sum1 = 0;
	double sum2 = 0;
	int flag = 1;
	for (int i = 0; i < num; i++)
	{
		sum1 += 1.0 / (i + 1);
		sum2 += flag*(1.0 / (i + 1));
		flag *= -1;
	}
	printf("sum1==%lf\n", sum1);
	printf("sum2==%lf\n", sum2);
}

void hw_13(void)
{
	int arr[8];
	int n = 1;
	arr[0] = 1;
	int i;
	for (i = 1; i < 8; i++)
	{
		n *= 2;
		arr[i] = n;
	}
	do
	{
		printf("%d ", arr[8-i]);
		i--;
	} while (i>0);
}

void hw_14(void)
{
	double arr1[8];
	double arr2[8];
	double sum = 0;

	for (int i = 0; i < 8; i++)
	{
		printf("please enter a number(%d):",i+1);
		scanf("%lf", &arr1[i]);
		sum += arr1[i];
		arr2[i] = sum;
	}
	for (int i = 0; i < 8; i++)
	{
		printf("%5.2lf ", arr1[i]);
	}
	printf("\n");
	for (int i = 0; i < 8; i++)
	{
		printf("%5.2lf ", arr2[i]);
	}
}

void hw_15(void)
{
	char arr[255];
	for (int i = 0; i < 10; i++)
	{
		scanf("%c", &arr[i]);
	}
	for (int i = 9; i >= 0; i--)
	{
		printf("%c", arr[i]);
	}
}

void hw_16(void)
{
	double sum1 = 100, sum2 = 100;
	int i = 0;
	while (sum2 <= sum1)
	{
		i++;
		sum1 += 100 * 0.1;
		sum2 *= 1.05;
	}
	printf("year==%d,sum1==%lf,sum2==%lf\n", i, sum1, sum2);
	
}

void hw_17(void)
{
	double sum = 100;
	int i = 0;
	while (sum > 0)
	{
		i++;
		sum += 100 * 0.08;
		sum -= 10;
	}
	printf("year==%d\n", i);
}

void hw_18(void)
{
	int sum = 5;
	int i = 0;
	while (sum <= 150)
	{
		i++;
		sum -= i;
		sum *= 2;
	}
	printf("week==%d,sum==%d\n", i, sum);
}