#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
    DWORD mode = 0;
    GetConsoleMode(hStdin, &mode);
    SetConsoleMode(hStdin, mode & (~ENABLE_ECHO_INPUT));

    int numberToGuess = 0;
    int guess = 0;
    cout << "Type the number to guess" <<endl;
    cin >> numberToGuess;

    cout << "Try to guess the number!" << endl << "what is your guess?" << endl;
    cin >> guess;

    do {

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

        {
        }
    }  while (guess != numberToGuess);
    cout << "Congrats! You've guessed the number! It is: " << guess << ";" << endl;
}
