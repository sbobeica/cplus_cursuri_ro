#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string text;
    string stop = "stop";
    vector<string> sort_text;

    cout << "The loop will continue untill you type 'stop'"<<endl;

    while (text != stop)
    {
        cout << "Type your text: ";
        cin >>text;
        sort_text.push_back(text);
    }  cout << "Number of words: " <<sort_text.size()<<endl;
    sort(sort_text.begin(), sort_text.end());

    cout << "[ ";
    for (string i : sort_text)
    {
        cout <<i <<' ';
    }
    cout << "]" << endl;

    cout << "Do not display repeated strings" << endl;
    cout << "[ ";
    for (int i = 0; i<sort_text.size(); ++i) // prints the content of the "sort_text" vector
        if (i==0 || sort_text[i-1] != sort_text[i] ) // prints the content of the "sort_text" vector that doesn't repeat
            cout <<sort_text[i] <<' ';

    cout << "]" << endl;

}
