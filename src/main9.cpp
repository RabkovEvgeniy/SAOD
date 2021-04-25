#include <SAOD.h>
int M, C;
using namespace std;

int main(){
    int i;  
    srand(time(0));
    M=C=0;
    cout << "n\t\t\tHeap Sort" << endl;
    cout<<"\tinc\tdec\trand"<<endl;

    for (i = 100; i < 599; i += 100)
    {
        int* a = new int[i+1];
        cout << i << "\t";
        FillInc(a, i+1);
        HeapSort2(a, i);
        cout << M + C << "\t";
        FillDec(a, i+1);
        HeapSort2(a, i);
        cout << M + C << "\t";
        FillRand(a, i+1);
        HeapSort2(a, i);
        cout << M + C << "\t";
        cout<<2*i*log2(i) + i +2 + i*log2(i) + 6.5*i -4<<endl;
        delete[]a;
    }
    cout << endl;
    int arr[11];
    FillRand(arr,11);
    HeapSort2(arr,10);
    PrintMas(arr,11);
    cout << M + C << "\t";
    return 0;
}