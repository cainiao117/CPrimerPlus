#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <float.h>

void hw_1(void);
void hw_2(void);
void hw_3(void);
void hw_4(void);
void hw_5(void);
void hw_6(void);
void hw_7(void);
void hw_8(void);

int main()
{
	/*hw_1();*/
	//hw_2();
	/*hw_3();*/
	/*hw_4();*/
	/*hw_5();*/
	/*hw_6();*/
	/*hw_7();*/
	hw_8();

	return 0;
}

void hw_1(void)
{
	char name[20];
	char surname[20];

	printf("please enter your name and surname:");
	scanf("%s %s", name, surname);

	printf("%s,%s", name, surname);

}

void hw_2(void)
{
	char name[10];
	char surname[20];

	printf("please enter your name:");
	scanf("%s", name);
	printf("please enter your surname:");
	scanf("%s", surname);

	printf("your name is \"%s\"\n", name);
	printf("your surname is \"%s\"\n", surname);

	printf("your name is \"%20s\"\n", name);
	printf("your surname is \"%20s\"\n", surname);

	printf("your name is \"%-20s\"\n", name);
	printf("your surname is \"%-20s\"\n", surname);

	printf("your name is \"%*s\"\n",strlen(name)+3,name);
	printf("your surname is \"%*s\"\n", strlen(name)+3,surname);
}

void hw_3(void)
{
	float f;
	
	printf("please enter a float number:");
	scanf("%f", &f);

	printf("输入%.1f或%.1e\n", f, f);
	printf("输入%+.3f或%.3E\n", f, f);

}

void hw_4(void)
{

	float height;
	char name[10];

	printf("please enter your height(inch):");
	scanf("%f", &height);
	printf("please enter your name:");
	scanf("%s", name);

	printf("%s,you are %.3f feet tall\n", name, height);

}

void hw_5(void)
{
	float speed;
	float size;

	printf("please enter speed(Mb/s):");
	scanf("%f", &speed);
	printf("please enter file's size(MB):");
	scanf("%f", &size);

	printf("At %.2f megabits per second,a file of %.2f megaBytes\ndownloads in %.2f seconds.\n", speed, size, size * 8 / speed);

}

void hw_6(void)
{
	char name[20];
	char surname[20];

	printf("please enter your name:");
	scanf("%s", name);
	printf("please enter your surname:");
	scanf("%s", surname);

	printf("%s %s\n", name, surname);
	printf("%*d %*d\n", strlen(name), strlen(name), strlen(surname), strlen(surname));

	printf("%s %s\n", name, surname);
	printf("%-*d %-*d\n", strlen(name), strlen(name), strlen(surname), strlen(surname));
}

void hw_7(void)
{
	double num1=1.0/3.0;
	float num2=1.0/3.0;

	printf("num1==%.6lf,num2=%.6f\n", num1, num2);
	printf("num1==%.12lf,num2=%.12f\n", num1, num2);
	printf("num1==%.16lf,num2=%.16f\n", num1, num2);
	printf("FLT_DIG==%d,DBL_DIG==%d\n", FLT_DIG, DBL_DIG);

}

void hw_8(void)
{
	float mile;
	float gal;

	const float f1 = 3.785;
	const float f2 = 1.609;

	printf("please enter the mile:");
	scanf("%f", &mile);
	printf("please enter the gal:");
	scanf("%f", &gal);

	printf("Run %.1f miles per gallon.\nRun 100Km use %.1f litter.\n", mile / gal, (gal*f1 * 100) / (mile*f2));
}