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
    int number = 0;
    cout << "introdu un nr.: " <<endl;
    cin >> number; //the number tha we would like to found out its divisors
    vector<int> divs = divisors(number); // we need this vector to store/keep the divisors. It will perform the function "divisors" on the variable "number".
    for (int m: divs) // This "for" is needed to display all the elements inside the "divs" vector.
    {
        cout << m << " ";
    }
}
