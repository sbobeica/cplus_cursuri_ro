#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int a[] = {1,2,3,4,5};
    int b[5];
    b[0]=2;
    b[1]=4;
    b[2]=21;
    b[3]=25;
    b[4]=19;
    b[5]=100;

//    printf("%d\n", &b[7]);

    int *p=b; // equivalent with itt *p=&a, valid just with arrays;
    //    p++; //- valid
    //    a++; //- invalid

    for (int i =0 ; i<=4; ++i){
        printf("%d\n", *(p+i));
        printf("%d\n",   p[i]);
        printf("%d\n", &(p[i]));
        printf("%d\n",  (p+i));

        printf("%d\n", &a[i]);
        printf("%d\n", a+i);
        printf("%d\n", a[i]);
        printf("%d\n", *(a+i));
    }

    //   printf("%d\n", a);
    //   printf("%d\n", a+1);
    //   printf("%d\n", a+2);
    //   printf("%d\n", a+3);
    //   printf("%d\n", a+4);
    //   printf("%d\n", *(a));
    //   printf("%d\n", *(a+1));
    //   printf("%d\n", *(a+2));
    //   printf("%d\n", *(a+3));
    //   printf("%d\n", *(a+4));


    return 0;
}
