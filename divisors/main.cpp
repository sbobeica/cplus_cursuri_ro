#include <iostream>
#include <vector>

using namespace std;

vector<int> divisors(int n)
{
    vector<int> result;

    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
        {
            result.push_back(i);
        }
    }

    return result;
}

int main()
{
    int number;
    cout << "Number = ";
    cin >> number;

    vector<int> divs = divisors(number);
    for (int n: divs)
    {
        cout << n << " ";
    }
    cout << endl;

    if (divs.size() > 2)
    {
        cout << "The number is not prime" << endl;
    }
    else
    {
        cout << "The number is very much a prime" << endl;
    }

    return 0;
}
