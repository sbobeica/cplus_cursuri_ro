#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string word){

    string temp;
    for(int i = word.size()-1; i >= 0;--i){
        temp.push_back(word.at(i));
    }
    return (word==temp);

}

bool isPalindrome(int number){

    while (number != 0){
        temp=number%10;
    }
}

int main()
{
    cout << "the word 'racecar' is a palindrome: " << isPalindrome("racecar") << endl;
    cout << "the word 'monitor' is a palindrome: " << isPalindrome("monitor") << endl;

    return 0;
}


