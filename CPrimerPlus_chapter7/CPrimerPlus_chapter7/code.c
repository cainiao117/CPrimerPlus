#define _CRT_SECURE_NO_WARNINGS 1
#include "head.h"

void Judge(void)
{
	int num;
	printf("please enter a number:");
	while (scanf("%d", &num) == 1)
	{
		int count = 0;
		for (int i = 2; i < num - 1; i++)
		{
			if (num%i == 0)
			{
				printf("%d ", i);
				count++;
			}
		}
		printf("\n");
		if (count == 0)
		{
			printf("%dÊÇÖÊÊý\n", num);
		}
		printf("please enter another number:");
	}
}

void hw_1(void)
{
	char ch;
	unsigned int num_space = 0;
	unsigned int num_enter = 0;
	unsigned int num = 0;
	printf("please enter your char:");
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case ' ':
			num_space++;
			break;
		case '\n':
			num_enter++;
			break;
		default:
			num++;
			break;
		}
	}
	printf("num_space==%d,num_enter==%d,num==%d\n", num_space, num_enter, num);
}

void hw_2(void)
{
	char ch;
	unsigned count = 0;
	printf("please enter your char:\n");
	while ((ch = getchar()) != '#')
	{
		count++;
		printf("%2c:%5d  ", ch, ch);
		if (count % 8 == 0)
		{
			printf("\n");
		}
	}
}

void hw_3(void)
{
	printf("please enter a number:");
	int num;
	unsigned count_odd = 0;
	int sum_odd = 0;
	unsigned count_even = 0;
	int sum_even = 0;

	scanf("%d", &num);
	while (num != 0)
	{
		if (num % 2)
		{
			count_odd++;
			sum_odd += num;
		}
		else
		{
			count_even++;
			sum_even += num;
		}
		printf("please enter a number:");
		scanf("%d", &num);
	}
	float average_even = (float)sum_even / count_even;
	float average_odd = (float)sum_odd / count_odd;
	printf("count_even==%d,average_even==%f,count_odd==%d,average_odd==%f\n", count_even, average_even, count_odd, average_odd);
}

void hw_4(void)
{
	char ch;
	unsigned int count = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			ch = '!';
			putchar(ch);
			count++;
		}
		else if (ch == '!')
		{
			putchar('!');
			putchar(ch);
			count++;
		}
		else
		{
			putchar(ch);
		}
	}
	printf("count==%d\n", count);
}

void hw_5(void)
{
	char ch;
	unsigned int count = 0;
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case '.':
			ch = '!';
			count++;
			break;
		case '!':
			putchar('!');
			count++;
			break;
		default:
			break;
		}
		putchar(ch);
	}
	printf("count==%d\n", count);
}

void hw_6(void)
{
	char ch;
	char pre_ch = 'q';
	unsigned int count = 0;
	while ((ch = getchar()) != '#')
	{
		if (('i' == ch) && ('e' == pre_ch))
		{
			count++;
		}
		pre_ch = ch;
	}
	printf("count==%d\n", count);
}

void hw_7(void)
{
	float hour;
	double money;
	double rate;
	while (scanf("%f", &hour) == 1)
	{
		if (hour <= BASE_TIME)
		{
			money = hour*BASE_PAY;
		}
		else
		{
			money = BASE_TIME*BASE_PAY + (hour - BASE_TIME)*OVER_TIME*BASE_PAY;
		}

		if (money <= PRE_MONEY)
		{
			rate = money*BASE_RATE;
		}
		else if (money <= PRE_MONEY + AFT_MONEY)
		{
			rate = PRE_MONEY*BASE_RATE + (money - PRE_MONEY)*OVER_RATE;
		}
		else
		{
			rate = PRE_MONEY*BASE_RATE + AFT_MONEY*OVER_RATE + (money - PRE_MONEY - AFT_MONEY)*LAST_RATE;
		}

		printf("your real money==%f\n", money - rate);
	}
}


void hw_8(void)
{
	int option;
	menu();
	printf("please choose:");
	scanf("%d", &option);
	while (option != 5)
	{
		switch (option)
		{
		case 1:
			cal(BASE_PAY1);
			break;
		case 2:
			cal(BASE_PAY2);
			break;
		case 3:
			cal(BASE_PAY3);
			break;
		case 4:
			cal(BASE_PAY4);
			break;
		default:
			printf("please choose correctly(1,2,3,4)!\n");
			break;
		}
		printf("please choose again:");
		scanf("%d", &option);
	}
	printf("Done!\n");
}

void cal(double pay)
{
	float hour;
	double money;
	double rate;

	printf("please enter work hour:");
	scanf("%f", &hour);

	if (hour <= BASE_TIME)
	{
		money = hour*pay;
	}
	else
	{
		money = BASE_TIME*pay + (hour - BASE_TIME)*OVER_TIME*pay;
	}

	if (money <= PRE_MONEY)
	{
		rate = money*BASE_RATE;
	}
	else if (money <= PRE_MONEY + AFT_MONEY)
	{
		rate = PRE_MONEY*BASE_RATE + (money - PRE_MONEY)*OVER_RATE;
	}
	else
	{
		rate = PRE_MONEY*BASE_RATE + AFT_MONEY*OVER_RATE + (money - PRE_MONEY - AFT_MONEY)*LAST_RATE;
	}

	printf("your real money==%f\n", money - rate);
}

void menu(void)
{
	printf("***************************************\n");
	printf("1)$8.75/hr                   2)$9.33/hr\n");
	printf("3)$10.00/hr                 4)$11.20/hr\n");
	printf("5)quit                                 \n");
	printf("***************************************\n");
}

void hw_9(void)
{
	int num;
	printf("please enter a num:");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		bool flag = false;
		for (int j = 2; j*j <=i; j++)
		{
			if (i%j == 0)
			{
				flag = true;
				break;
			}
		}
		if (!flag)
		{
			printf("%d ", i);
		}
	}
}

void hw_10(void)
{
	menu2();
	unsigned int id;
	printf("please choose your id:");
	scanf("%d", &id);
	while (id != 5)
	{
		switch (id)
		{
		case 1:
			Rate(MONEY_1);
			break;
		case 2:
			Rate(MONEY_2);
			break;
		case 3:
			Rate(MONEY_3);
			break;
		case 4:
			Rate(MONEY_4);
			break;
		default:
			printf("please choose correctly!\n");
			break;
		}
		printf("please choose again:\n");
		scanf("%d", &id);
	}
	printf("Done!\n");
}

void menu2(void)
{
	printf("***********************************\n");
	printf("1)single             2)house holder\n");
	printf("3)married and together   4)divorced\n");
	printf("               5)quit              \n");
	printf("***********************************\n");
}

void Rate(int money)
{
	float income;
	printf("please enter your income:");
	scanf("%f", &income);
	double rate;
	if (income <= money)
	{
		rate = income*RATE_1;
	}
	else
	{
		rate = money*RATE_1 + (income - money)*RATE_2;
	}
	printf("your income is %f $,the rate is %lf $\n",income,rate);
}

void hw_11(void)
{
	menu3();

	float artichoke_pound;
	float artichoke_sum_pound=0;
	float beef_pound;
	float beef_sum_pound=0;
	float carrot_pound;
	float carrot_sum_pound = 0;
	float sum_pound = 0;

	double vegetable_cost;
	double freight_cost;

	char ch;
	printf("please choose your vegetable(q to quit):");
	scanf("%c", &ch);
	while (ch != 'q')
	{
		switch (ch)
		{
		case 'a':
			printf("please enter the pound of artichoke:");
			scanf("%f", &artichoke_pound);
			artichoke_sum_pound += artichoke_pound;
			break;
		case 'b':
			printf("please enter the pound of beef:");
			scanf("%f", &beef_pound);
			beef_sum_pound += beef_pound;
			break;
		case 'c':
			printf("please enter the pound of carrot:");
			scanf("%f", &carrot_pound);
			carrot_sum_pound += carrot_pound;
			break;
		default :
			break;
		}

		printf("please choose again(q to quit):");
		scanf("%c", &ch);
	}

	sum_pound = artichoke_sum_pound + beef_sum_pound + carrot_sum_pound;
	vegetable_cost = artichoke_sum_pound*ARTICHOKE + beef_sum_pound*BEEF + carrot_sum_pound*CARROT;
	
	double discount = (vegetable_cost >= DISCOUNT_LINE) ? DISCOUNT_RATE : 0;

	if (sum_pound <= FREIGHT_LINE_1)
	{
		freight_cost = FREIGHT_COST_1;
	}
	else if (sum_pound <= FREIGHT_LINE_2)
	{
		freight_cost = FREIGHT_COST_2;
	}
	else
	{
		freight_cost = FREIGHT_COST_2 + (sum_pound - FREIGHT_LINE_2)*FREIGHT_COST_3;
	}

	printf("********************************************\n");
	printf("artichoke is sold in %f $,you order %f pound\n", ARTICHOKE, artichoke_sum_pound);
	printf("beef is soid in %f $,you order %f pound\n", BEEF, beef_sum_pound);
	printf("carrot is sold in %f $,you order %f pound\n", CARROT, carrot_sum_pound);
	printf("the sum pound is %f pounds,the vegetable fee is %f $\n", sum_pound, vegetable_cost);
	printf("the freight is %f $\n", freight_cost);
	printf("the discount is %f\n", discount);
	printf("the cost of all is %f $\n", (vegetable_cost + freight_cost)*(1-discount));
}

void menu3(void)
{
	printf("*******************************\n");
	printf("a)artichoke              b)beef\n");
	printf("c)carrot                 q)quit\n");
	printf("*******************************\n");
}