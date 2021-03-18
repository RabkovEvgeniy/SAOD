#include <iostream>
#include <time.h>
#include"Sourse.h"
#include <time.h>
int M, C;
using namespace std;
int main()
{
    srand(time(NULL));
    int c;
    int m;
    int i;
    cout << "n\tC 1version\tC 2version" << endl;

    for (i = 100; i < 1001; i += 100)
    {
        int* a = new int[i];
        int element;
        cin >> element;
        cout << i << "\t";
        FillInc(a, i);
        if (Bsearch1(a, i, element)) {
            cout << C << "\t\t";
        }
        if (Bsearch2(a, i, element)) {
            cout << C;
        }
        cout << endl;
        delete[]a;
    }
    cout << endl;

}









