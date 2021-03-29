#include <SAOD.h>

extern int M, C;

void HeapSort(int *arr, int size) {
  int temp, j;
  for (int i = size - 1; i > 0; i--) {
    j = MaxHeap(arr, 0, i);
    if (j == i)
      continue;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
}

int MaxHeap(int *arr, int L, int R) {
  int max, a, b;
  if (L * 2 + 1 > R)
    return L;
  if (L * 2 + 2 > R)
    return arr[L] > arr[R] ? L : R;
  a = MaxHeap(arr, L * 2 + 1, R);
  b = MaxHeap(arr, L * 2 + 2, R);
  max = arr[a] > arr[b] ? a : b;
  return arr[L] > arr[max] ? L : max;
}

int Bsearch2(int *a, int size, int element) {
  C = 0;
  int L = 0;
  int R = size - 1;
  bool flag = 0;
  while (L < R) {
    int m = (L + R) / 2;
    if (a[m] < element)
      L = m + 1;
    else
      R = m;
    C++;
  }
  if (a[R] == element)
    flag = 1;
  C++;
  if (flag)
    return R;
  else
    return -1;
}
int Bsearch1(int *a, int size, int element) {
  C = 0;
  int L = 0;
  int R = size - 1;
  bool flag = 0;
  int m;
  while (L <= R) {
    C++;
    m = (L + R) / 2;
    if (a[m] == element) {
      flag = 1;
      break;
    }
    C++;
    if (a[m] < element)
      L = m + 1;
    else
      R = m - 1;
  }
  if (flag)
    return m;
  else
    return -1;
}

int knut(int l) {
  if (l == 1)
    return 1;
  return (2 * knut(l - 1) + 1);
}

bool m(int a, int b) {
  C++;
  return a < b;
}
int Sedfvig(int i) {
  if (i % 2 == 0) {
    return 9 * pow(2, i) - 9 * pow(2, i / 2) + 1;
  } else {
    return 8 * pow(2, i) - 6 * pow(2, (i + 1) / 2) + 1;
  }
}

int count_of_step(int size, bool flag) {
  int i = 0;
  if (flag)
    return log(size) / log(2) - 1;
  else {
    while (true) {
      i++;
      if (3 * Sedfvig(i) > size)
        return i - 1;
    }
  }
}

void ShellSort(int *a, int n, bool flag) {
  M = C = 0;
  int m = count_of_step(n, flag);
  //

  while (true) {
    int k = flag ? knut(m) : Sedfvig(m);
    int t;
    int j;
    for (int i = k; i < n; i++) {
      t = a[i];
      j = i - k;
      C++;
      while (j >= 0 && (t < a[j])) {
        C++;
        a[j + k] = a[j];
        j = j - k;
        M++;
      }
      a[j + k] = t;
      M = M + 2;
    }
    m--;
    if (m == 0)
      break;
  }
  if (C != n - 1)
    C -= n - 1;
}
void InsertSort(int *a, int n) {
  M = 0;
  C = 0;
  int t;
  int j;
  for (int i = 1; i < n; i++) {
    t = a[i];
    j = i - 1;
    //   C++;
    while (j >= 0 && m(t, a[j])) {
      //    C++;
      a[j + 1] = a[j];
      j = j - 1;
      M++;
    }
    a[j + 1] = t;
    M = M + 2;
  }
  // if(C!= n-1) C -= n - 1;
}
void SelectSort(int *a, int n) //���������� ������ �������
{
  int min, tmp;
  for (int i = 0; i < n - 1; i++) {
    min = i;
    for (int j = i + 1; j < n; j++) {
      if (a[j] < a[min]) {
        min = j;
      }
      C++;
    }
    tmp = a[i];
    a[i] = a[min];
    a[min] = tmp;
    M += 3;
  }
}

void BubbleSort(int *a, int n) //���������� ������� ��������
{
  M = C = 0;
  for (int i = 0; i < n - 1; i++)
    for (int j = n - 2; j >= i; j--) {
      if (a[j] > a[j + 1]) {
        int c;
        c = a[j];
        a[j] = a[j + 1];
        a[j + 1] = c;
        M += 3;
      }
      C++;
    }
}

void ShakerSort(int *a, int n) {
  int L = 0, R = n - 1, k = n - 1;
  M = C = 0;
  while (L < R) {
    for (int i = R; i > L; i--) {
      C++;
      if (a[i] < a[i - 1]) {
        int tmp = a[i];
        a[i] = a[i - 1];
        a[i - 1] = tmp;
        M += 3;
        k = i;
      }
    }
    L = k;
    for (int i = L; i < R; i++) {
      C++;
      if (a[i] > a[i + 1]) {
        int tmp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = tmp;
        M += 3;
        k = i;
      }
    }
    R = k;
  }
}

int CheckSum(int *A, int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += A[i];
  }
  return sum;
}

int RunNumber(int *A, int n) {
  int s = 0;
  for (int i = 1; i < n; i++) {
    if (A[i] < A[i - 1])
      s++;
  }
  return s + 1;
}

void PrintMas(int *A, int n) {
  for (int i = 0; i < n; i++) {
    cout << A[i] << ' ';
  }
  cout << endl;
}

void FillRand(int *A, int n) {

  for (int i = 0; i < n; i++) {
    A[i] = 1 + rand() % n;
  }
}

void FillInc(int *A, int n) {
  for (int i = 0; i < n; i++) {
    A[i] = i + 1;
  }
}

void FillDec(int *A, int n) {

  for (int i = 0; i < n; i++) {
    A[i] = n - i;
  }
}

PhoneNote::KeysForSort PhoneNote::key_for_sort = PhoneNote::Number;

PhoneNote::PhoneNote() {
  this->number = "-";
  this->name = "-";
  this->age = 0;
  this->organizations = "-";
}

void PhoneNote::edit_phone_note(string number, string name, int age,
                                string organizations) {
  this->number = number;
  this->name = name;
  this->age = age;
  this->organizations = organizations;
}

string PhoneNote::get_number() { return this->number; }

string PhoneNote::get_name() { return this->name; }

int PhoneNote::get_age() { return this->age; }

int PhoneNote::get_organizations() { return this->organizations; }

void PhoneNote::set_key_for_sort(KeysForSort key) { PhoneNote::key = key; }

bool PhoneNote::operator<(&PhoneNote note) {
  switch (PhoneNote::key) {
  case Number:
    return this->number < note->number;
  case Name:
    return this->name < note->name;
  case Age:
    return this->age < note->age;
  case Organizations:
    return this->organizations < note->organizations;
  }
}
