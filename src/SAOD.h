#pragma once
#include <PhoneNote.h>
#include <cmath>
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

template <typename T> int MaxHeap(T *, int, int);

template <typename T> void HeapSort(T *, int);

int *GetPtrToSortedIndexArr(PhoneNote *, int);

void PrintWhithIndesxMas(int *, PhoneNote *, int);
void FillInc(int *, int);
void FillDec(int *, int);
int CheckSum(int *, int);
int RunNumber(int *, int);
void PrintMas(int *, int);
void FillRand(int *, int);
void BubbleSort(int *, int);
void ShakerSort(int *, int);
void SelectSort(int *, int);
void InsertSort(int *a, int n);
void ShellSort(int *a, int n, bool);
int knut(int l);
int Sedfvig(int i);
int count_of_step(int size, bool flag);
int Bsearch1(int *a, int size, int element);
int Bsearch2(int *a, int size, int element);
