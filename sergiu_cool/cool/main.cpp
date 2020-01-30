#include <iostream>
#include <vector>

using namespace std;
bool isSecventa (vector<int> cool) {
    for(int i=0; i<cool.size()-1; ++i)
    {
        if (cool[i] != cool[i+1]-1){
            return false;
            break;
        }
    }
    return true;
}

void sort (vector<int>& cool){
    for (int i=0; i<cool.size();++i){
        for (int j=i+1; j<cool.size(); ++j)
            if (cool[i]>cool[j])
            {
                swap(cool[i],cool[j]);
            }
    }
}
int main()
{
    vector <int> cool = {20,6,16,15,17,1,3,5,10,12,7,11,9,4};
    cout << endl;
    vector <int>& v = cool;
    sort(v);
    vector <int> v1;
    int i = 0;
    do {
        if (v[i]==v[i+1]-1) //chech whether next elements is secvential or not
        {
            v1.push_back(v[i]);
            ++i;
        }
        else if (v[i]!=v[i+1]-1)  //puch bach the last element from secvential
        {
            if (v[i]==v[i-1]+1)  //puch bach the last element from secvential
               {
                v1.push_back(v[i]);
            }
            ++i;
        }
    }while (i<=v.size()-1);

    for (int j=0; j<v1.size(); ++j)
    {
        cout << v1[j]<<endl;
    }
}

