#include <iostream>
#include <string>

using namespace std;
bool isPalindrome1(string word)
{
    int k = word.size()-1;
    bool pal = true;

    for(int i=0; i<= word.size()/2;++i)
    {
        if(word.at(i)!=word.at(k))
        {
            pal=false;
            break;
        }
        else
            k--;
    }
    return pal;
}

int main()
{

    return 0;
}
