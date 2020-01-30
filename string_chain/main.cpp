#include <iostream>
#include <string>
#include <vector>
#include <algorithm>    // std::sort
using namespace std;

int main()
{
    vector<string> text_chain;
    string text;
    int n = 0;

    cout<<"introdu nr. de stringuri dorit: " <<endl;
    cin>> n;

    for (int i=0; i<n; ++i )
    {
        cout<<"introdu un text: " << endl;
        cin >> text;
        text_chain.push_back(text);
    }

    sort (text_chain.begin(),text_chain.end());

    cout << "the string chain is: " << endl;

    for (string m: text_chain)
    {
        cout << m << ' ';
    } cout << endl;
}
