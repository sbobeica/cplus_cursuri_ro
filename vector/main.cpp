#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main ()
{

    int number = 0;
    int sum = 0;
    vector<int> numbers;

    do
    {
        cout << "Number = ";
        cin >> number;
        numbers.push_back(number);
        sum += number;
    }
    while (number != 0);

    cout << "The sum of [ ";
    for (int n : numbers )

    {
        cout << n << ' ';
    }
    cout << "] is: " << sum << endl;

}
