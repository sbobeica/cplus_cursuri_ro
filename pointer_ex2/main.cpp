#include <iostream>

using namespace std;

void sum(int a, int b, int *result)
{
    *result = a + b;
}

int main()
{
    int a;
    int b;
    int r = 0;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    sum(a, b, &r);

    cout << "The sum of " << a << " and " << b << " is " << r << endl;

    return 0;
}
