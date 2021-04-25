#include <SAOD.h>
int M,C;
int main()
{
    List* lst = new List;
    FillIncS(lst, 7);
    (*lst).printList();
    cout << endl;
    cout << lst->CheckSumS() << endl;
    cout << lst->RunNumberS() << endl;
    List* lst1 = new List;
    FillDecS(lst1, 7);
    (*lst1).printList();
    cout << endl;
    cout << lst1->CheckSumS() << endl;
    cout << lst1->RunNumberS() << endl;
    List* lst2 = new List;
    FillRandS(lst2, 7);
    (*lst2).printList();
    cout << endl;
    cout << lst2->CheckSumS() << endl;
    cout << lst2->RunNumberS() << endl;
}