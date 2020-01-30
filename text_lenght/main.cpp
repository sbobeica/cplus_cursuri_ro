#include <iostream>
#include <string>

using namespace std;

int main()
{

    string text;
    int number = 0;
    // int number2 = 0;

    cout << "type a text: " << endl;
    cin >> text;
    cout << text.size() <<endl;

    cout << "enter a number: " <<endl;
    cin >> number;



    if ( text.size() > number)
    {
        cout << "You've exceded the limit!!!" << endl;
    }
    else {
        cout << "You are into the limits" <<endl;
    }

}
