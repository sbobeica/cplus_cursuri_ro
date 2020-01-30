#include <iostream>

using namespace std;

struct Node
{
    int value;
    Node *next;
};

int main()
{
    Node node1;
    Node node2;
    Node node3;
    node1.value = 3;
    node1.next = &node2;
    node2.value = 6;
    node2.next = &node3;
    node3.value = 9;
    node3.next = nullptr;
    Node *it = &node1;
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
