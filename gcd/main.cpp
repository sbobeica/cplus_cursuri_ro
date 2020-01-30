#include <iostream>
#include <math.h>
#include <vector>

using namespace std;
void div(int x, int y, int *result)
{
    vector<int> gcd;
    while (y != 0)
    {
        int c = y;
        gcd.push_back(y);
        y = (x%y);
        x = c;
    } *result = gcd[gcd.size()-1];
}

int main()
{
    int a =0;
    int b =0;
    int c =0;
    //    vector<int> gcd;

    cout << "type nr.1" << endl;
    cin >> a;
    cout << "type nr.2" << endl;
    cin >> b;
    div(a,b,&c);
    cout << "The GCD is: " << c <<endl;

    //    while (b != 0)
    //    {
    //        int c = b;
    //        gcd.push_back(b);
    //        b = (a%b);
    //        a = c;
    //    }
    //    cout << "[ ";
    //    for (int i : gcd)
    //    {
    //        cout << i << ' ';
    //    }
    //    cout <<"]" <<endl <<"the gcd is: "<<"[ " << gcd[gcd.size()-1]<<' ' << ']' <<endl;

}

