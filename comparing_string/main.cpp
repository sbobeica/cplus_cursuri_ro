#include <iostream>
#include <string>

using namespace std;

int main()
{

    string text1;
    string text2;

    cout << "type text1: " << endl;
    cin >> text1;

    cout << "type text2: " << endl;
    cin >> text2;

    if (text1 == text2)
    {
        cout << "You've started reapeating your self! \n";
    }
    else {
        cout << "It makes sense what you say!" <<endl;
    }

}
