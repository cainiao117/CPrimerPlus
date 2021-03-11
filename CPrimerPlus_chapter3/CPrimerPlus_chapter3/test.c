#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <limits.h>
#include <float.h>

//void hw_1(void);
void hw_2(void);
void hw_3(void);
void hw_4(void);
void hw_5(void);
void hw_6(void);
void hw_7(void);

int main()
{

	//hw_1();
	//hw_2();
	//hw_3();
	//hw_4();
	//hw_5();
	//hw_6();
	hw_7();

	return 0;
}

//void hw_1(void)
//{
//
//	printf("INT_MAX == %d,INT_MIN == %d ,FLT_MAX == %e,FLT_MIN == %e\n", INT_MAX, INT_MIN,FLT_MAX,FLT_MIN);
//
//	int n1 = INT_MAX + 1;
//	float f1 = FLT_MAX *100.0f;
//	float f2 = FLT_MIN /100.0f;
//
//	printf("n1 == %d,f1 == %e,f2 == %e\n", n1,f1,f2);
//}

void hw_2(void)
{
	int n;

	printf("please enter a number:");
	scanf("%d", &n);

	printf("%c\n", n);
}

void hw_3(void)
{

	printf("\a");
	printf("Startled by the sudden sound,Sally shouted,\n\"By the Great Pumpkin,what was that\"");

}

void hw_4(void)
{

	float f;

	printf("Enter a floating-point value:");
	scanf("%f", &f);

	printf("fixed-point notation: %f \n", f);
	printf("exponential notation: %e \n", f);
	printf("p notation: %p \n", f);

}

void hw_5(void)
{
	
	int age;
	double f = 3.156e7;

	printf("please enter your age:");
	scanf("%d", &age);

	printf("%d age == %le seconds\n", age, age*f);

}

void hw_6(void)
{
	
	float num;

	printf("please enter a kuatuo number:");
	scanf("%f", &num);

	printf("water number == %e\n", num * 950 /3.0e-23 );

}

void hw_7(void)
{

	float inch;

	printf("please enter your height:");
	scanf("%f", &inch);

	printf("%f inch == %f cm\n", inch, inch*2.54);

}