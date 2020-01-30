#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{

    int numberToGuess = 7;
    int guess = 0;

    cout << "try to guess the number!" << endl << "what is yout guess?" << endl;
    cin >> guess;

    if (guess < numberToGuess)
    {
        cout << "try a higher number... :( " << endl;
        cin >> guess;
    }

   else if (guess > numberToGuess)
    {
        cout << "try a smaller number... :( " << endl;
        cin >> guess;

    }

    else
    {
        cout << "congrats!!! " << numberToGuess << endl;
    }

}
