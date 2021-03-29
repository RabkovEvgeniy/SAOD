#pragma once
#include <cmath>
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int MaxHeap(int *arr, int L, int R);
void HeapSort(int *arr, int size);
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

class PhoneNote {
public:
  enum KeysForSort { Number, Name, Age, Organizations };

  PhoneNote(string number, string name, int age, string organizations);

  void edit_phone_note(string number, string name, int age,
                       string organizations);

  string get_number();
  string get_name();
  int get_age();
  string get_organizations();

  static void set_key_for_sort(KeysForSort key);

  bool operator<(&PhoneNote note);

private:
  static KeysForSort key_for_sort;
  string number;
  string name;
  int age;
  string organizations;
};

ostream &operator<<(ostream &os, const PhoneNote &note);
