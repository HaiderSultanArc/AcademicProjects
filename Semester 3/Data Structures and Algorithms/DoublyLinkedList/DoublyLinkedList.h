#ifndef DSA_DOUBLYLINKEDLIST_H
#define DSA_DOUBLYLINKEDLIST_H

class Node {
public:
    Node* previousNode;
    Node* nextNode;
    double data;

    Node() {
        this->previousNode = nullptr;
        this->nextNode = nullptr;
        this->data = 0;
    }
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList();

    void addNode(double inputData);
    void changeHead(double headData);
    void insertNode(int nodeNumber, double inputData);
    void deleteNode(int nodeNumber);
    void updateNode(int nodeNumber, double updateData);
    void searchNode(double searchData);
    void display();

private:
    Node* requiredNode(Node* node, int nodeNumber);
    void searchNode(double searchData, Node* node, int nodeNumber);
    void display(Node* node);
};


#endif //DSA_DOUBLYLINKEDLIST_H
