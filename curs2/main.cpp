#include <iostream>
#include <string>

using namespace std;

int main()
{
    string login;
    string passwd;

    cout << "Enter your login: ";
   // cin >> input0;
    getline(cin, login);

    cout << "Enter your passwd: ";
   // cin >> passwd;
    getline(cin, passwd);

    string concatenated = login + passwd;

    cout << concatenated << endl;

    cout << "the combined length of the two strings is: " << concatenated.size() << endl;

    //  cin >> input;
    //  getline(cin, input); //afiseaza si dupa spatii
    //   cout << input << endl;
}
