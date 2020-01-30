#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int factorial = 1;
    int number = 0;
    cout << "Type the number: ";
    cin >> number;
    for (int i=1; i <= number; ++i)
    {
        factorial *= i;
    }
    cout << factorial <<endl;
}
