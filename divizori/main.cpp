#include <iostream>
#include <math.h>       /* sqrt */
#include <vector>

using namespace std;

int main()
{
    int number = 0;
    vector<int> divizor;
    cout << "what is the number you would like to check? ";
    cin >> number;
    bool  prime = true;

    for (int i = 2; i < number; ++i)
    {
        if (number % i == 0)
        {
            prime = false; // numarul nu este prim!
            divizor.push_back(i);
        }
    }
    if (prime == true)
    {
        cout<< number << " is a prime number" <<endl;
    }
    else
    {
        cout<< number <<" is not a prime number" << endl ;
        cout <<  "Divizorii sunt: [ ";
        for (int n: divizor )
        {
            cout<< n << ' ';
        }
        cout <<"]";
    }
}
