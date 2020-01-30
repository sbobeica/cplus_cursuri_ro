#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a = 4;
    int *p = &a;

    cout << "p = " << p << endl;
    cout << "&a = " << &a << endl;

    cout << "*p = " << *p << endl;
    cout << "a = " << a << endl;
    cout << "*(&a) = " << *(&a) << endl;

    a = 7;
    cout << "*p = " << *p << endl;

    *p = 9;
    cout << "a = " << a << endl;
}
