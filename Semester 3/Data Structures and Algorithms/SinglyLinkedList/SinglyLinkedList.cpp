#include "DataStructures.h"
#include <iostream>

SinglyLinkedList::SinglyLinkedList() {
    this->head = nullptr;
    this->tail = nullptr;
}

void SinglyLinkedList::changeHead(double headData) {
    Node* newHead = new Node();

    newHead->data = headData;
    newHead->nextNode = this->head;
    this->head = newHead;

    std::cout << std::endl << "Head Changed to new Node with Data: " << headData;
    std::cout << std::endl;
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

    std::cout << std::endl << "Node Added!";
    std::cout << std::endl;
}

Node * SinglyLinkedList::requiredNode(Node *node, int nodeNumber) {
    if (this->head == nullptr) {
        std::cerr << std::endl << nodeNumber + 1 << " is not Accessible, head of LinkedList (" << int(&this->head) << ") is a Null Pointer!";
        std::cout << std::endl;

        return nullptr;
    }

    for (int currentNodeNumber = 0; currentNodeNumber < nodeNumber; currentNodeNumber++) {
        if (node->nextNode == nullptr) {
            std::cerr << std::endl << nodeNumber + 1 << " is not a Node in Linked List (" << int(&this->head) << ")";
            std::cout << std::endl << "Maximum Node Number: " << currentNodeNumber;
            std::cout << std::endl;

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
        std::cerr << std::endl << "You cannot delete the Head of the Linked List";
        std::cout << std::endl;
    }
    else {
        Node* requiredNode;

        requiredNode = this->requiredNode(this->head, nodeNumber - 1);

        if (requiredNode == nullptr) {
            return;
        }
        else if (requiredNode->nextNode->nextNode == nullptr) {
            std::cerr << std::endl << "Tail cannot be Deleted!";
            std::cout << std::endl;
        }
        else {
            requiredNode->nextNode = requiredNode->nextNode->nextNode;

            std::cout << std::endl << "Node: " << nodeNumber << " Deleted!";
            std::cout << std::endl;
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

        std::cout << std::endl << "Node: " << nodeNumber << " was Updated with Data: " << updateData;
        std::cout << std::endl;
    }
}

void SinglyLinkedList::searchNode(double searchData, Node *node, int nodeNumber) {
    if (node == nullptr) {
        std::cout << std::endl;
    }
    else {
        if (node->data == searchData) {
            std::cout << std::endl << "Data: " << node->data << " is in " << nodeNumber;
        }

        this->searchNode(searchData, node->nextNode, nodeNumber + 1);
    }
}

void SinglyLinkedList::searchNode(double searchData) {
    if (this->head == nullptr) {
        std::cerr << std::endl << "Head of LinkedList (" << int(&this->head) << ") is a Null Pointer!";
        std::cout << std::endl;
    }
    else {
        this->searchNode(searchData, this->head, 0);
    }
}

void SinglyLinkedList::display(Node* node) {
    if (node == nullptr) {
        std::cout << std::endl;
    }
    else {
        std::cout << std::endl << "Data: " << node->data;
        this->display(node->nextNode);
    }
}

void SinglyLinkedList::display() {
    if (this->head == nullptr) {
        std::cerr << std::endl << "Head of LinkedList (" << int(&this->head) << ") is a Null Pointer!";
        std::cout << std::endl;
    }
    else {
        this->display(this->head);
    }
}