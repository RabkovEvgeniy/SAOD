#include <iostream>
#include <time.h>
#include"Sourse.h"
#include <time.h>
int M, C;
using namespace std;
int main()
{
    srand(time(NULL));
    int i;



    cout << "n\tC(first) 1version\tC(mid)\tC(last)\t\tC(first) 2version\tC(mid)\tC(last)\t1 not\t2not" << endl;
    for (i = 100; i < 1001; i += 100)
    {
        int* a = new int[i];
        int first = 1;
        int mid = i / 2;
        int last = i;
        cout << i << "\t";
        FillInc(a, i);
        Bsearch1(a, i, first);
        cout << C << "\t\t\t";
        Bsearch1(a, i, mid);
        cout << C << "\t";
        Bsearch1(a, i, last);
        cout << C << "\t\t";
        Bsearch2(a, i, first);
        cout << C << "\t\t\t";
        Bsearch2(a, i, mid);
        cout << C << "\t";
        Bsearch2(a, i, last);
        cout << C << "\t";
        Bsearch1(a, i, i+1);
        cout << C << "\t";
        Bsearch2(a, i, i + 1);
        cout << C;
        cout << endl;
        delete[]a;
    }
    cout << endl;

}








