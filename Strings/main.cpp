#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input1;
    cout << "Enter some string: ";
    getline(cin, input1);

    string input2;
    cout << "Enter another string: ";
    getline(cin, input2);

    string concatenated = input1 + " " + input2;
//    cout << input1 + input2 << endl;
    cout << concatenated << endl;

    cout << "The combined length of the two strings is: " << concatenated.size() << endl;
}
