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

//void sort (vector<int>* cool){
//    for (int i=0; i<cool->size();++i){
//        for (int j=i+1; j<cool->size(); ++j)
//            if ((*cool)[i]>(*cool)[j])
//            {
//                swap((*cool)[i],(*cool)[j]);
//            }
//    }
//}
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
    vector <int> cool = {1,3,2,8,6,7,9,4};
    cout << endl;
    vector <int>& coool = cool;
    sort(coool);

//    for (int i=0; i<coool.size();++i){
//        cout << coool[i];
//    }
//    cout <<endl << isSecventa(coool)<<endl;
    //
    if (isSecventa(coool)==true){
        for (int i=0; i<coool.size();++i){
            cout << coool[i];
        }
    } else while (isSecventa(coool)!= true) {
        for (int i=coool.size()-1; i>=0; --i)
        {
            vector<int>::const_iterator first = coool.begin();
            vector<int>::const_iterator last = coool.begin()+coool[i];
            vector<int> asd(first, last);
//            vector<int> asd = coool;
            if (isSecventa(asd)== true)
                coool=asd;
            {
                for (int i=0; i<asd.size();++i){
                    cout << asd[i];
                }
            }
//            else {
//                for (int j=coool.size(); j>=0; --j)

//                        for (int j=0; j<coool.size();++j){
//                            cout << cool[j];}
//                        //break;

//            }
        }

    }
    //        for (int i=0; i<cool.size();++i){
    //            cout << cool[i]<<endl;
    //        }
    //            if (isSecventa(cool)==true)
    //            for (int j=cool.size(); j>=i; --j);
    //    }
    //    for (int i=0; i<cool.size();++i){
    //        cout << cool[i]<<endl;
    //    }
}
