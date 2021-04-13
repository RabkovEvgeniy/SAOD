#include <SAOD.h>
int M, C;
using namespace std;

int main(){
    int i;  
    srand(time(0));
    M=C=0;
    cout << "n\t\t\tQuick Sort" << endl;
    cout<<"\tinc\tdec\trand"<<endl;

    for (i = 100; i < 501; i += 100)
    {
        int* a = new int[i+1];
        cout << i << "\t";
        M=C=0;
        FillInc(a, i+1);
        QuickSort(a,1,i);
        cout << M + C << "\t";
        M=C=0;
        FillDec(a, i+1);
        QuickSort(a,1,i);
        cout << M + C << "\t";
        M=C=0;
        FillRand(a, i+1);
        QuickSort(a,1,i);
        cout << M + C << "\t";
        cout<<3*(i-1) + (i*i +5*i +4)/2<<endl;
        delete[]a;
    }
    cout << endl;
    int arr[11];
    M=C=0;
    FillRand(arr,11);
    QuickSort(arr,1,10);
    PrintMas(arr,11);
    cout << M + C << "\t";
    return 0;
}