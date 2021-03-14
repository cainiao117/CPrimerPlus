#define _CRT_SECURE_NO_WARNINGS 1
#define MIN_PER_HOUR 60
#define DAY_PER_WEEK 7
#define CEN_PER_INCH 2.54
#define INCH_PER_FEET 12
#define C1 5.0
#define C2 9.0
#define C3 32.0
#define C4 273.16

#include <stdio.h>

void hw_1(void);
void hw_2(void);
void hw_3(void);
void hw_4(void);
void hw_5(void);
void hw_6(void);
void hw_7(void);
void cal(double n);
void hw_8(void);
void hw_9(void);
void temperatures(double df);

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
	hw_9();
	return 0;
}

void hw_1(void)
{
	int hour, minute;
	printf("please enter a minute number:");
	scanf("%d", &minute);
	while (minute > 0)
	{
		hour = minute/MIN_PER_HOUR;
		printf("%d minutes == %d hours and %d minutes\n", minute, hour, minute%MIN_PER_HOUR);
		printf("please enter another minute number:");
		scanf("%d", &minute);
	}
	printf("Done!\n");
}

void hw_2(void)
{
	int num;
	printf("please enter a number:");
	scanf("%d", &num);
	int i=0;
	while (i <= 10)
	{
		printf("%d ", num + i);
		i++;
	}
}

void hw_3(void)
{
	int day;
	printf("please enter a day number:");
	scanf("%d", &day);
	while (day > 0)
	{
		printf("%d days are %d weeks ,%d days\n", day, day / DAY_PER_WEEK, day%DAY_PER_WEEK);
		printf("please enter another day:");
		scanf("%d", &day);
	}
	printf("Done!\n");
}

void hw_4(void)
{
	float centimeter;
	int feet;
	float inch;
	printf("Enter a height in centimeters:");
	scanf("%f", &centimeter);
	while (centimeter > 0)
	{
		inch = centimeter / CEN_PER_INCH;
		feet = (int)inch / INCH_PER_FEET;
		printf("%.1f cm == %d feet,%.1f inches\n", centimeter,feet,inch-feet*INCH_PER_FEET );
		printf("Enter a height in centimeters(<=0 to quit):");
		scanf("%f", &centimeter);
	}
	printf("Bye\n");

}

void hw_5(void)
{
	int num;
	printf("please enter a num:");
	scanf("%d", &num);

	int i=0;
	int sum = 0;
	while (i <= num)
	{
		sum += i;
		i++;
	}
	printf("sum == %d\n", sum);
}

void hw_6(void)
{
	int num;
	printf("please enter a num:");
	scanf("%d", &num);

	int i = 0;
	int sum = 0;
	while (i <= num)
	{
		sum += i*i;
		i++;
	}
	printf("sum == %d\n", sum);
}

void hw_7(void)
{
	double num;
	printf("please enter a number:");
	scanf("%lf", &num);
	cal(num);
}

void cal(double n)
{
	double result = n*n*n;
	printf("result == %lf\n", result);
}

void hw_8(void)
{
	int num1, num2;
	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand:");
	scanf("%d", &num2);
	printf("Now enter the first operand:");
	scanf("%d", &num1);
	while (num1 > 0)
	{
		printf("%d %% %d is %d\n", num1, num2, num1%num2);
		printf("Enter next number for the first operand(<=0 to quit):");
		scanf("%d", &num1);
	}
	printf("Done\n");
}

void hw_9(void)
{
	double df;
	printf("please enter degree Fahrenheit:");
	int re=scanf("%lf", &df);
	while (re == 1)
	{
		temperatures(df);
		printf("please enter another degree Fahrenheit:");
		re=scanf("%lf", &df);
	}
	printf("Done\n");
}

void temperatures(double df)
{
	double dc = C1 / C2*(df - C3);
	/*double dc = 1.8*df + 32;*/
	double dk = dc + C4;
	printf("%.2lf df == %.2lf dc ==%.2lf dk\n", df, dc, dk);
}