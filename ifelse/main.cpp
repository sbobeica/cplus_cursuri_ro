#include <iostream>

using namespace std;

int main()
{
    int numberToGuess = 7;
    int guess = 0;

    while (guess != numberToGuess)
    {
        cout << "Try to guess the number!" << endl << "What is your guess? ";
        cin >> guess;

        if (guess < numberToGuess)
        {
            cout << "Try a higher number... :(" << endl;
        }
        else if (guess > numberToGuess)
        {
            cout << "Try a smaller number... :(" << endl;
        }
        else
        {
            cout << "You've got it! The number was " << guess << endl;
        }
    }
}
