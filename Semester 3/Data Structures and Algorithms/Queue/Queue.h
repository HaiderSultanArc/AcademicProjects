#ifndef DSA_QUEUE_H
#define DSA_QUEUE_H

class Node {
public:
    Node* nextNode;
    double data;

    Node() {
        this->nextNode = nullptr;
        this->data = 0;
    }
};

class Element {
public:
    Element *previousElement;
    char data;

    Element() {
        this->previousElement = nullptr;
        this->data = 0;
    }
};

class Queue {
private:
    Element *front;
    Element *rear;

public:
    Queue();

    void enQueue(char inputData);
    void deQueue();
    char frontElementData();
    bool isEmpty();
    void display();

private:
    void display(Element *element);
};


#endif //DSA_QUEUE_H
