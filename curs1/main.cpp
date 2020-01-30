#include <iostream>
#include <string>
#include <windows.h>
#include <math.h>

using namespace std;

int main()
{
    /*1. coments
    int initialized = 3;
    cout << initialized << endl;
    initialized = 7;
    cout << initialized << endl;
    cout << "initialized" << endl;
    */

    //2. prints an integer number from keyboard
    //    int var = 0;
    //    cout << "introdu un numar intreg: ";
    //    cin >> var;
    //    cout << var << endl;

    //3. comparam daca primul e mai mare decit al doilea
    //    int number1 = 0;
    //    int number2 = 0;

    //    cout << "introdu primul numar: ";
    //    cin >> number1;

    //    cout << "introdu numarul doi: ";
    //    cin >> number2;

    //    cout << "primul este mai mare decit al doilea: " << (number1 > number2) << endl;

    // 4. calculates the sum of the 2 integers
    //    int a = 0;
    //    int b = 0;
    //    int c = 0;

    //    cout << "type first number: ";
    //    cin >> a;

    //    cout << "type second number: ";
    //    cin >> b;

    //    c = a + b;

    //    cout << "calculates the addition a+b=c" << c <<endl;

    // 5. calculates the division of the 2 integers
    //    cout << "type first number: ";
    //    cin >> a;

    //    cout << "type second number: ";
    //    cin >> b;

    //    cout << "calculates a/b" << endl;

    //    cout << "result: " << ( a / b ) << "; rest: " << ( a % b ) << ";" <<endl;

    //}

    // 6.
//    cout << "Please enter a floating-point value: ";
//    int n;
//    cin >> n;
//    double s; // to be able to do sqrt
//    s = n;
//    cout << "n == " << n
//         << "\nn+1 == " << n+1
//         << "\nthree times n == " << 3*n
//         << "\ntwice n == " << n+n
//         << "\nn squared == " << n*n
//         << "\nhalf of n == " << n/2
//         << "\nsquare root of n == " << sqrt(s)
//         << '\n'; // another name for newline (“end of line”) in output

//    // 7.
//    string previous = " "; // previous word; initialized to “not a word”
//    string current; // current word
//    while (cin>>current) { // read a stream of words
//    if (previous == current) // check if the word is the same as last
//    cout << "repeated word: " << current << '\n';
//    previous = current;
//    }

//    //8.
//    int a = 2000;
//    char c = a; // try to squeeze a large int into a small char
//    int b = c;
//    if (a != b) // != means “not equal”
//    cout << "oops!: " << a << "!=" << b << '\n';
//    else
//    cout << "Wow! We have large characters\n";

    // 9.
    double d = 0;
    while (cin>>d) { // repeat the statements below
    // as long as we type in numbers
    int i = d; // try to squeeze a double into an int
    char c = i; // try to squeeze an int into a char
    int i2 = c; // get the integer value of the character
    cout << "d==" << d // the original double
    << " i=="<< i // converted to int
    << " i2==" << i2 // int value of char
    << " char(" << c << ")\n"; // the char
    }
}















