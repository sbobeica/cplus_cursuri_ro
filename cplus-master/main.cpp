#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

void add(int value, node *head);
void erase(int index, node *head);

int main()
{
    node *head;
    head->data=3;
    head->next=NULL;

    add(5, head);
    add(4, head);
    add(9, head);
    add(6, head);

//    erase(0, head);

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data <<endl;
        temp = temp->next;
    }

    return 0;
}

void add(int value, node *head){
    node *temp1=head;
    while (temp1->next != NULL) {
        temp1 = temp1->next;
    }
    node *temp = new node;
    temp->data = value;
    temp->next = NULL;
    temp1->next=temp;
}
void erase(int index, node *head){

    node *prev = head;
    node *it = head;

    if (index == 0){
        head = head->next;
    }
    else {
        int i=0;
        while (i < index) {
            prev = it;
            it =it->next;
            ++i;
        }prev->next = it->next;
    }
    delete it;
}
