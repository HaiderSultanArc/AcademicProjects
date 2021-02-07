#ifndef DSA_SINGLYLINKEDLIST_H
#define DSA_SINGLYLINKEDLIST_H

class Node {
public:
    Node* nextNode;
    double data;

    Node() {
        this->nextNode = nullptr;
        this->data = 0;
    }
};

class SinglyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    SinglyLinkedList();

    void addNode(double inputData);
    void changeHead(double headData);
    void insertNode(int nodeNumber, double inputData);
    void deleteNode(int nodeNumber);
    void updateNode(int nodeNumber, double updateData);
    void searchNode(double searchData);
    void display();

private:
    Node* requiredNode(Node* node, int nodeNumber);
    void searhcNode(double searchData, Node* node, int nodeNumber);
    void display(Node* node);
};


#endif //DSA_SINGLYLINKEDLIST_H
