#include <iostream>

using namespace std;

struct node {   //Aici cream o noua strucura de date cu numele "node"
    int data;       //Aceasta este una din componentele noii structuri de date. Si este o variabila de tip int.
    node *next;     //Aceasta este a doua componenta a noii structuri de date. Si este un pointer catre un tip de date "node".
};

int main(){
    //aici cream 3 pointeri, care pointeza catre un node.
    node *n;
    node *temp;
    node *first;

    n = new node;   //aici se creaza un nod nou (new node), iar 'n' primeste ca valoare adresa acestui nod nou, deci devine un pointer catre noul nod.
    temp=n;         //aici pointerul "temp" priveste valoarea lui "n", adica adresa noului nod, deci si "temp" acum pointeza catre noul nod.
    first=n;        //aici pointerul "first" priveste valoarea lui "n", adica adresa noului nod, deci si "first" acum pointeza catre noul nod.
    n->data=10;     //aici cimplul/componenta "data" din nodul spre care pointeaza "n", primeste valoare 10.
    n->next=nullptr;    //aici cimplul/componenta "next" din nodul spre care pointeaza "n", primeste valoare nullptr,

    n=new node;     //aici se creaza un alt nod nou (new node), iar 'n' primeste ca valoare adresa acestui nod nou, deci devine un pointer catre noul nod.
    n->data=20;      //aici cimplul/componenta "data" din nodul spre care pointeaza "n", primeste valoare 20.
    temp->next=n;   //aici componenta "next" a nodului spre care pointeaza "temp", primeste valoare lui "n", adica adresa noului nod (ultimul creat).
                    //Dar "temp" aici inca pointeaza catre nodul percedent, deci elementul "next" de la precedentul nod primeste ca valoare adesa noului nod.
                    //Astfel nodul precedent acum pointeaza catre nodul nou. In asa mod se creaza legatura dintre precedentul nod si nodul nou.
    temp=temp->next;    //Aici 'temp', care inca pointeaza catre nodul precedent, primeste ca valoare adresa din "next", care din comanda de mai sus vedem ca
                        //are adresa noului nod (temp->next=n). Deci "temp" acum pointeaza catre noul/ultimul nod creat.
    //temp=n; - aceasta comanda este echivalenta cu comanda precedenta, ambele seteaza valoare lui "temp" egala cu adresa nodului nou creat.

    n=new node;     //aici cream un nod nou. Pasii sunt ca si la nodul precedent. Citeste mai sus.
    n->data=30;
    n->next=nullptr;
    temp->next=n;
    temp=temp->next;
    //temp=n;

    n=new node;     //aici cream un nod nou. Pasii sunt ca si la nodul precedent. Citeste mai sus.
    n->data=40;
    n->next=nullptr;
    temp->next=n;
    temp=temp->next;
    //temp=n;

    do
    {
        cout << first->data<<endl;      //Aici citim componenta "data" de la nodul spre care pointeaza pointerul "first", la prima iteratie fiind primul nod...
        first=first->next;              //Aici lui "first" ii setam ca valoare adresa stocata in cimpul "next" al nodului spre care pointeaza "first", la prima
                                        //iteratie fiind primul nod, dar dupa aceasta operatie, "first" va pointa spre al doilea nod, deoarece a primit adresa
                                        //din "next" care pointeaza spre urmatorul nod. I asa mod se parcurge toata lista si se printeaza valorile din "data".

    }
    while (first!=nullptr);     //Aici zicem sa parcurga lista din "do" pina cand "first" nu devine egal cu "nullprt". Si "first" va avea valoare nullptr doar
                                //cind va ajunge la ultimul nod din lista, in cazul de fata la nodul 4.


}
