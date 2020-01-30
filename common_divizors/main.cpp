#include <iostream>
#include <vector>
#include <algorithm>    // std::sort

using namespace std;
void div(int n1, int n2, int *result )
{
    while( n1 != n2 )
        {
            if (n1 > n2)
            {
                n1 = (n1 - n2);
            }
            else if (n1 < n2)
            {
                n2 = (n2 - n1);
            }
        } *result = n1;
}

int main()
{
    int a;
    int b;
    int divizor = 0;

    cout << "type nr. 1: " << endl;
    cin >> a;
    cout << "type nr. 2: " << endl;
    cin >> b;

    div(a,b,&divizor);

    cout << endl;
    cout <<"The GCD is: [ "<< divizor <<" ]"<<endl;

}
