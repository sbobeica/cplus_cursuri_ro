#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    int n = 0;
    int i = 0;
    int c = 0;
    int s = 0;

    cout << "Introdu nr. de iteratii:" << endl;
    cin >> n;

    while (i!=n)
    {
        cout << "Introdu un nr:" << endl;
        cin >> c;
        s +=c;
        ++i;
    }

    //    for (i=0; i==n; ++i)
    //    {
    //        cout << "Introdu nr. de iteratii:" << endl;
    //        cin >> c;
    //        s +=c;
    //    }

    cout << "Ai atins limita de iteratii:" << endl;
    cout << "Nr. de iteratii dirit: " << n << endl;
    cout << "Nr. de iteratii efectuat: " << i << endl;
    cout << "Suma: " << s << endl;
}
