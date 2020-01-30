#include <iostream>

using namespace std;

int cmmdv(int a,int b)

{    int x=a%b;
     while(x!=0)
     {
         a=b;
         b=x;
         x=a%b;
     }
      return b;
}

int main()

{
    int a=0;
    int b=0;

    cout<<"a= ";cin>>a;
    cout<<"b= ";cin>>b;

    cout<<"CMMDV a celor doua numere este:"<<cmmdv(a,b)<<endl;

    return 0;

}
