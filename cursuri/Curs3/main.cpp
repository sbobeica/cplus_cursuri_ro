#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number1 = 0;
    string input;

    cout << "Introduceti numarul: ";
    cin >> number1;
    cin.ignore();

    cout << "Intorduceti textul: ";
    getline(cin, input);

    if (input.size() > number1)
    {
        cout <<"Ai depasit limita " << endl;
    }
    else
    {
        cout << "Te aflii in limita " << endl;
    }

    return 0;
}
