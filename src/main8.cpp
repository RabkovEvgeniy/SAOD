#include <PhoneNote.h>
#include <SAOD.h>
int M, C;

int main() {
  int *ptr1, *ptr2;
  PhoneNote arr[5];
  arr[0].edit_phone_note("89237269909", "Jenga", 18, "Sibguti");
  arr[1].edit_phone_note("89237269906", "Alex", 21, "Sibguti");
  arr[2].edit_phone_note("89237269908", "Ivan", 19, "Sibguti");
  arr[3].edit_phone_note("89237269907", "Olga", 20, "Sibguti");
  arr[4].edit_phone_note("89237269905", "Maria", 22, "Sibguti");

  PhoneNote::set_key_for_sort(PhoneNote::Name);
  ptr1 = GetPtrToSortedIndexArr(arr, 5);
  PrintWhithIndesxMas(ptr1, arr, 5);
  cout << "--------------------------------------" << endl;
  PhoneNote::set_key_for_sort(PhoneNote::Age);
  ptr2 = GetPtrToSortedIndexArr(arr, 5);
  PrintWhithIndesxMas(ptr2, arr, 5);
}
