#include "linkedlist.h"

Node *add(Node *start, int value)
{
    Node *newNode = new Node;
    newNode->value = value;
    newNode->next = nullptr;

    if (start != nullptr)
    {
        Node *it = start;
        while (it->next != nullptr)
        {
            it = it->next;
        }
        it->next = newNode;
    }

    return newNode;
}

Node *erase(Node *start, int index)
{
    Node *it = start;
    Node *prev = start;
    Node *result = start;

    if (index == 0)
    {
        result = start->next;
    }
    else
    {
        int i = 0;
        while (i != index)
        {
            prev = it;
            it=it->next;
            ++i;
        }

        prev->next = it->next;
    }

    delete it;
    return result;
}

int size(Node *start)
{
    int count = 1;
    Node *it = start;
    while (it->next != nullptr)
    {
        ++count;
        it = it->next;
    }

    return count;
}
