#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string disliked = "broccoli";
    string liked;
    string stop = "stop";

    string bleep = "BLEEP";
    vector<string> all;

    do
    {
        cout << "type a word: " <<endl;
        cin >> liked;
        all.push_back(liked);
    } while (liked !=stop );

    cout << "[ ";
    for (string m : all)
    {
        cout << m<<' ';
    }
    cout << "]" << endl;
    cout << "[ ";

    for (int i=0; i<all.size(); ++i)
    {
        if (all[i]==disliked)
        {
            all[i] = bleep;
        }
        cout << all[i] <<' ';
    }
    cout << "]" << endl;
}
