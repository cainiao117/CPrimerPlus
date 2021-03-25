#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define YEARS 5
#define MONTHS 12
#define NUM 5

void hw_1(void);
copy_arr(double target[NUM], double source[NUM], int n);
copy_ptr(double* ptarget,double* psource, int n);
copy_ptrs(double* ptarget,double* psource1, double* psource2);
int hw_3(int* arr, int n);
int hw_4(double* arr, int n);
double hw_5(double* arr, int n);
void hw_6(double* arr,int n);
void copy(int row, int col, double source[][5],double target[][5]);
void show(int row, int col, double target[][5]);
void add(int* psource1, int* psource2, int* ptarget, int n);
void redouble(int arr[][5], int row);
void redouble2(int(*p)[5], int row);
void Show(int arr[][5], int row);
float sum(float (*rain)[MONTHS], int n);
void Print(float(*rain)[MONTHS],int n);
void Init(double (*p)[5],int row);
double cal(double(*p)[5]);
double Cal(double(*p)[5], int row);
double Max(double(*p)[5], int row);