#include <iostream>
#include <math.h>       /* sqrt */

using namespace std;

int main()
{
    int number = 0;
    cout << "what is the number you would like to check? ";
    cin >> number;
    bool  prime = true;

    for (int i = 2; i < number; ++i)
    {
        if (number % i == 0)
        {
            prime = false; // numarul nu este prim!
        }
    }

    if (prime) //here "prime" is true by default
    {
        cout<< number << "is a prime number" <<endl;
    }
    else
    {
        cout<< number <<"is not a prime number" <<endl;
    }

}
