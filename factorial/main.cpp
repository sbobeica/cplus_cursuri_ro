#include <iostream>

using namespace std;

factorial (int n)
{
    if (n == 2)
    {
        return 2;
    }
    return n * factorial(n - 1);
}
int main()
{
    int number;
    cout << "Number = ";
    cin >> number;

    cout<< "The factorial for this number is: " << factorial(number) << endl;

    return 0;
}
