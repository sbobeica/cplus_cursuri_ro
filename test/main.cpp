#include <iostream>

using namespace std;

struct node {   //Aici cream o noua strucura de date cu numele "node"
    int data;       //Aceasta este una din componentele noii structuri de date. Si este o variabila de tip int.
    node *next;     //Aceasta este a doua componenta a noii structuri de date. Si este un pointer catre un tip de date "node".
};

void add(node *first, int value);
void erase (node *first, int index);

int main(){
    node start;
    start.data=11;
    start.next=nullptr;

    add(&start, 13);
    add(&start, 15);
    add(&start, 17);

    erase(&start, 2);

    node *it = &start;
    do
    {
        cout << it->data << endl;
        it = it->next;
    }
    while (it != nullptr);
}

void erase (node *first, int index)
{
    node *it = first;
    node *prev = first;

    int i=0;

    while (i!=index) {
        prev=it;
        it=it->next;
        ++i;
    }
    prev->next=it->next;

    delete it;
}

void add(node *first, int value)
{
    node *temp = first;
    node *n = first;

    while (temp->next!=nullptr) {
        temp = temp->next;
    }

    n = new node;
    n->data=value;
    n->next=nullptr;
    temp->next=n;
    temp=n;   //aici putem scrie si in felul urmator: "temp=n". De fapt noua ne trebuie ca temp sa pointeze spre nodul nou creat.
}
