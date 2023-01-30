// DeletionSLinkedLPract.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node* next;

};

void printNodes(Node*n)
{
    while (n != NULL)
    {
        cout << n->value << endl;
        n = n->next;
    }
}



void insertAtSpe(Node*prev,int newValue)
{
    if (prev == NULL)
    {
        cout << "prev cant be null" << endl;
        return;
    }

    Node* newNode = new Node();
    newNode->value = newValue;

    newNode->next = prev->next;
    prev->next = newNode;
}

void deletion(Node* nodes, int delValue)
{
    Node* delnode = new Node();
    delnode = nodes;

    int i = 0;

    if (delnode->value == delValue)
    {
        Node* toDelete = delnode;
       
        delnode->next = delnode->next->next;

        delete toDelete;
        

        i++;
    }

    else
    {
        i = 2;

        while (delnode->next->value != delValue)
        {


            delnode = delnode->next;

            i++;
        }

        

        Node* toDelete = delnode->next;
        delnode->next = delnode->next->next;

        delete toDelete;
    }
    cout << "value found in   = '' " << i << "''   position " << endl;
} 

int main()
{

    Node* nodes = new Node();
    Node* nodem = new Node();
    Node* nodem1 = new Node();
    Node* nodee = new Node();

    nodes->value = 1;
    nodes->next = nodem;

    nodem->value = 2;
    nodem->next = nodem1;

    nodem1->value = 4;
    nodem1->next = nodee;

    nodee->value = 3;
    nodee->next = NULL;

    cout << "normal nodes " << endl;

    printNodes(nodes);

    cout << "insert at specific point1" << endl;

    insertAtSpe(nodem, -2);

    printNodes(nodes);
    

    cout << "after deletion a node" << endl;

    deletion(nodes, -2);

    printNodes(nodes);
    cout << "after deletion a node" << endl;

    deletion(nodes, 4);
    printNodes(nodes);

    cout << "after deletion last  node" << endl;
    deletion(nodes, 3);
    printNodes(nodes);

    cout << "insert at specific point" << endl;
    insertAtSpe(nodem, 6);
    printNodes(nodes);


    cout << "insert at specific point1" << endl;
    insertAtSpe(nodes, 5);
    printNodes(nodes);

  


    
    




    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
