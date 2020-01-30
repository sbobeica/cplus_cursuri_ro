#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 0;
    char next;
    cout << "type a character: " << endl;
    cin >> next;
    char last = 'z';
    vector<int> integers;
    vector<char> characters;

    //    do
    //    {
    //        cout<< next << '\t' << a;
    //        ++a;
    //        cin >> next;
    //    } while ( next != last );

//    for ( n = 97; next != last; ++n)
//    {
//        cout << next << "\t" <<n <<endl;
//        cin >> next;
//    }
        for ( n = 97; next != last; ++n)
        {
            cout << next << "\t" <<n <<endl;
            integers.push_back(n);
            characters.push_back(next);
            cin >> next;
        }
        for (int i : integers)
        {
            cout << i <<' ';
        }
        for (char s : characters)
        {
            cout << s <<' ';
        }

}
