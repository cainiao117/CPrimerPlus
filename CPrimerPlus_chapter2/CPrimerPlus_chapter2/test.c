#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void hw2_1(void);
void hw2_2(void);
void hw2_3(void);
void hw2_4(void);
void hw2_5(void);
void br(void);
void ic(void);
void hw2_6(void);
void hw2_7(void);
void s(void);
void hw2_8(void);
void one_three(void);
void two(void);

int main()
{

	//hw2_1();
	//hw2_2();
	//hw2_3();
	//hw2_4();
	//hw2_5();
	//hw2_6();
	//hw2_7();
	hw2_8();
	return 0;
}


void hw2_1(void)
{

	printf("Anton Bruckner\n");
	printf("Anton\nBruckner\n");
	printf("Anton ");
	printf("Bruckner\n");
	
}

void hw2_2(void)
{

	printf("LiHua\n");//name
	printf("China\n");//address

}

void hw2_3(void)
{

	int age = 20;

	printf("%d years old == %d days.\n", age, 365 * age);

}

void award(void)
{

	printf("For he's a jolly good fellow\n");
	printf("For he's a jolly good fellow\n");
	printf("For he's a jolly good fellow\n");

}
void reward(void)
{

	printf("which nobody can deny\n");

}
void hw2_4(void)
{
	award();
	reward();
}

void hw2_5(void)
{
	br();
	printf(",");
	ic();
	printf("\n");
	ic();
	printf(",");
	printf("\n");
	br();
	printf("\n");
}

void br(void)
{
	printf("Brazil,Russia");
}
void ic(void)
{
	printf("India,China");
}

void hw2_6(void)
{
	int toes = 10;

	printf("toes == %d ,toes * 2 == %d,toes * toes == %d \n", toes, toes * 2, toes*toes);

}

void hw2_7(void)
{
	s();
	s();
	s();
	printf("\n");
	s();
	s();
	printf("\n");
	s();
	printf("\n");
}
void s(void)
{
	printf("simle!");
}

void hw2_8(void)
{
	printf("starting now:\n");
	one_three();
	printf("done!\n");
}
void one_three(void)
{
	printf("one\n");
	two();
	printf("three\n");
}
void two(void)
{
	printf("two\n");
}