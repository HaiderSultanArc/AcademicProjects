#ifndef DSA_STACK_H
#define DSA_STACK_H

class Element {
public:
    Element* previousElement;
    Element* nextElement;
    char data;

    Element() {
        this->previousElement = nullptr;
        this->nextElement = nullptr;
        this->data = 0;
    }
};

class Stack {
private:
    Element* top;

public:
    Stack();

    void push(char inputData);
    void pop();
    Element* topElement();
    void display();

private:
    void display(Element* element);
};


#endif //DSA_STACK_H
