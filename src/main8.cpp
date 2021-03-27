#include <SAOD.h>

int M, C;

int main() {
  int arr[10];

  FillRand(arr, 10);
  PrintMas(arr, 10);
  HeapSort(arr, 10);
  PrintMas(arr, 10);
}
