#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main ()
{
    int n = 0;
    int suma =0;
    int i =0;
    cout << "Introdu nr. de iteratii:" << endl;
    cin >> n;

    for (i=0; i<n; ++i)
    {
        int numar;
        cout << "Introdu un numar:" << endl;
        cin >> numar;
        suma += numar;
    }

    cout << "Ai atins limita de iteratii:" << endl;
    cout << "Nr. de iteratii dirit: " << n << endl;
    cout << "Nr. de iteratii efectuat: " << i << endl;
    cout << "Suma: " << suma << endl;
}
