#include "SinglyLinkedList.h"
#include <iostream>

using namespace std;

SinglyLinkedList::SinglyLinkedList() {
    this->head = nullptr;
    this->tail = nullptr;
}

void SinglyLinkedList::changeHead(double headData) {
    Node* newHead = new Node();

    newHead->data = headData;
    newHead->nextNode = this->head;
    this->head = newHead;

    cout << endl << "Head Changed to new Node with Data: " << headData;
    cout << endl;
}

void SinglyLinkedList::addNode(double inputData) {
    Node* newNode = new Node();

    newNode->nextNode = nullptr;
    newNode->data = inputData;

    if (this->head == nullptr) {
        this->head = newNode;
        this->tail = newNode;
    }
    else {
        this->tail->nextNode = newNode;
        this->tail = newNode;
    }

    cout << endl << "Node Added!";
    cout << endl;
}

Node * SinglyLinkedList::requiredNode(Node *node, int nodeNumber) {
    if (this->head == nullptr) {
        cerr << endl << nodeNumber + 1 << " is not Accessible, head of LinkedList (" << int(&this->head) << ") is a Null Pointer!";
        cout << endl;

        return nullptr;
    }

    for (int currentNodeNumber = 0; currentNodeNumber < nodeNumber; currentNodeNumber++) {
        if (node->nextNode == nullptr) {
            cerr << endl << nodeNumber + 1 << " is not a Node in Linked List (" << int(&this->head) << ")";
            cout << endl << "Maximum Node Number: " << currentNodeNumber;
            cout << endl;

            return nullptr;
        }
        else {
            node = node->nextNode;
        }
    }

    return node;
}

void SinglyLinkedList::insertNode(int nodeNumber, double inputData) {
    if (nodeNumber == 0) {
        this->changeHead(inputData);
    }
    else {
        Node* newNode = new Node();
        Node* requiredNode;

        requiredNode = this->requiredNode(this->head, nodeNumber - 1);

        if (requiredNode == nullptr) {
            return;
        }
        else if (requiredNode->nextNode == nullptr) {
            this->addNode(inputData);
        }
        else {
            newNode->data = inputData;
            newNode->nextNode = requiredNode->nextNode;
            requiredNode->nextNode = newNode;

            std::cout << std::endl << "Node with Data: "<< inputData << " Inserted!";
            std::cout << std::endl;
        }
    }
}

void SinglyLinkedList::deleteNode(int nodeNumber) {
    if (nodeNumber == 0) {
        cerr << endl << "You cannot delete the Head of the Linked List";
        cout << endl;
    }
    else {
        Node* requiredNode;

        requiredNode = this->requiredNode(this->head, nodeNumber - 1);

        if (requiredNode == nullptr) {
            return;
        }
        else if (requiredNode->nextNode->nextNode == nullptr) {
            cerr << endl << "Tail cannot be Deleted!";
            cout << endl;
        }
        else {
            requiredNode->nextNode = requiredNode->nextNode->nextNode;

            cout << endl << "Node: " << nodeNumber << " Deleted!";
            cout << endl;
        }
    }
}

void SinglyLinkedList::updateNode(int nodeNumber, double updateData) {
    Node* requiredNode;

    requiredNode = this->requiredNode(this->head, nodeNumber);

    if (requiredNode == nullptr) {
        return;
    }
    else {
        requiredNode->data = updateData;

        cout << endl << "Node: " << nodeNumber << " was Updated with Data: " << updateData;
        cout << endl;
    }
}

void SinglyLinkedList::searchNode(double searchData, Node *node, int nodeNumber) {
    if (node == nullptr) {
        cout << endl;
    }
    else {
        if (node->data == searchData) {
            cout << endl << "Data: " << node->data << " is in " << nodeNumber;
        }

        this->searchNode(searchData, node->nextNode, nodeNumber + 1);
    }
}

void SinglyLinkedList::searchNode(double searchData) {
    if (this->head == nullptr) {
        cerr << endl << "Head of LinkedList (" << int(&this->head) << ") is a Null Pointer!";
        cout << endl;
    }
    else {
        this->searchNode(searchData, this->head, 0);
    }
}

void SinglyLinkedList::reverse() {
    Node *previousNode;
    Node *currentNode;
    Node *nextNode;

    previousNode = nullptr;

    currentNode = this->head;
    this->tail = this->head;

    while (currentNode != nullptr) {
        nextNode = currentNode->nextNode;
        currentNode->nextNode = previousNode;
        previousNode = currentNode;
        currentNode = nextNode;
    }

    this->head = previousNode;
}

void SinglyLinkedList::display(Node* node) {
    if (node == nullptr) {
        cout << endl;
    }
    else {
        cout << endl << "Data: " << node->data;
        this->display(node->nextNode);
    }
}

void SinglyLinkedList::display() {
    if (this->head == nullptr) {
        cerr << endl << "Head of LinkedList (" << int(&this->head) << ") is a Null Pointer!";
        cout << endl;
    }
    else {
        this->display(this->head);
    }
}