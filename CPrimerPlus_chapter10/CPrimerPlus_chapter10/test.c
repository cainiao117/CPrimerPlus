#define _CRT_SECURE_NO_WARNINGS 1

#include "head.h"

int main()
{
	/*int arr[] = { 1, 2, 34 };
	printf("%d\n", *(arr+2));*/

	/*hw_1();*/

	/*double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double target1[5];
	double target2[5];
	double target3[5];

	copy_arr(target1, source, 5);
	copy_ptr(target2, source, 5);
	copy_ptrs(target3, source, source+5);
	for (int i = 0; i < 5; i++)
	{
		printf("%.1lf  %.1lf  %.1lf\n", target1[i], target2[i],target3[i]);
	}*/

	/*int arr[10] = { 1, 34, 56, 7234, 25, 144, 54325, 6543, 367, 100 };
	printf("max==%d\n", hw_3(arr,10));*/

	//double arr[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	//printf("index==%d\n", hw_4(arr, 5));

	/*double arr[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	printf("max-min==%.1lf\n", hw_5(arr, 5));*/

	//double arr[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	//hw_6(arr, 5);
	////for (int i = 0; i < 5; i++)
	////{
	////	printf("%.1lf ", arr[i]);
	////}

	//double source[3][5] = {
	//	{1,2,3,4,5},
	//	{6,7,8,9,10},
	//	{11,12,13,14,15}
	//};
	//double arr[3][5] = { 0 };
	//for (int i = 0; i < 3; i++)
	//{
	//	/*copy_arr(*(arr + i), *(source+i), 5);*/
	//	/*copy_ptr(*(arr+i), *(source+i), 5);*/
	//	copy_ptrs(*(arr + i), *(source + i), *(source + i) + 5);
	//}
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 5; j++)
	//	{
	//		printf("%5.1lf  ", arr[i][j]);
	//	}
	//	printf("\n");
	//}

	/*double source[7] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
	double target[3] = { 0 };

	copy_ptr(target, source+2, 3);
	for (int i = 0; i < 3; i++)
	{
		printf("%.1lf ", target[i]);
	}
*/

	/*double source[3][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};
	double target[3][5];
	copy(3, 5, source, target);
	show(3, 5, target);*/

	/*int arr1[4] = { 2, 4, 5, 8 };
	int arr2[4] = { 1, 0, 4, 6 };
	int arr3[4];
	add(arr1, arr2, arr3, 4);
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", arr3[i]);
	}*/

	/*int arr[3][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};
	redouble2(arr, 3);
	Show(arr, 3);*/

	/*float rain[YEARS][MONTHS] = {
		{ 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
		{ 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 },
		{ 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
		{ 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
		{ 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 }
	};
	printf("The yearly average is %.1f inches.\n", sum(rain,YEARS));
	printf("MONYHLY AVERAGES:\n");
	printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
	Print(rain, YEARS);*/

    double arr[3][5];
    Init(arr, 3);
for (int i = 0; i < 3; i++)
{
	for (int j = 0; j < 5; j++)
	{
		printf("%6.2lf  ", arr[i][j]);
	}
	printf("\n");
}
     
for (int i = 0; i < 3; i++)
{
	printf("row %d 's average is %lf\n", i+1,cal(arr + i));
}
    
printf("the average==%lf\n", Cal(arr, 3));
printf("the max==%lf\n", Max(arr, 3));

	return 0;
}