#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// Defines one element of the list

struct Node

{
    int value;
    Node *next;
};

// Adds 'value' to the list of which the first node is 'start'
Node *add(Node *start, int value);

// Deletes element from index 'index' from the list of which the first node is 'start'
Node *erase(Node *start, int index);

// Computes the size of the list of which the first node is 'start'
int size(Node *start);

#endif // LINKEDLIST_H
