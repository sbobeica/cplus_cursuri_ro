#include <iostream>

#include "linkedlist.h"

using namespace std;

int main()
{
    Node *start = add(nullptr, 3);
    add(start, 6);
    add(start, 9);
    add(start, 12);

//    add(add(add(start, 6), 9), 12);

    start = erase(start, 0);

    cout << "Size: " << size(start) << endl;

    Node *it = start;
    cout << "[ ";
    do
    {
        cout << it->value << " ";
        it = it->next;
    }
    while (it != nullptr);
    cout << "]" << endl;

    cin.get();

    return 0;
}
