#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    double a =0;
//    double b =0;
    double big=0;
    double small=0;
    do
    {
        cout<< "type a: ";
        cin >> a;

        double k=0.01;




        if (a<big)
        {
            cout <<"the smallest so far: " << a <<endl;
            small = a;
        }
        else if (a>big)
        {
            cout <<"the largest so far: " << a <<endl;
            big = a;
        }
        else if (a==small || a==big)
        {
            if (a==small)
            {
                cout << "The number is equal with the previous smallest number: " << a <<endl;
            }
            else if (a==big) {
                cout << "The number is equal with the previous bigest number: " << a <<endl;
            }
        }
//        else {
//            cout<<"the numbers are equal"<<endl;
//        }
    } while (a!=555);
}
