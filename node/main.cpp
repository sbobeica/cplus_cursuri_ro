#include <iostream>

using namespace std;

// Defines one element of the list
struct Node
{
    int value;
    Node *next;
};

// Adds 'value' to the list of which the first node is 'start'
void add(Node *start, int value)
{
    Node *it = start; // start este punctul de inceput, punctul de plecare
    while (it->next != nullptr)
    {
        it = it->next;
    }
    Node *newNode = new Node;
    newNode->value = value;
    newNode->next = nullptr;
    it->next = newNode;
}

// Deletes element from index 'index' from the list of which the first node is 'start'
void erase(Node *start, int index)
{
    Node *it= start;
    Node *prev=start;

    int i = 0;
    while (i != index)
    {
        prev = it;
        it=it->next;
        ++i;
    }

    prev->next = it->next;

    delete it;
}

// Computes the size of the list of which the first node is 'start'
int size(Node *start)
{

}
int main()
{
    Node start;
    start.value = 3;
    start.next = nullptr;

    add(&start, 6);
    add(&start, 9);
    add(&start, 12);

    erase(&start, 2);

    Node *it = &start;
    cout << "[ ";
    do
    {
        cout << it->value << " ";
        it = it->next;
    }
    while (it != nullptr);
    cout << "]" << endl;

    return 0;
}
