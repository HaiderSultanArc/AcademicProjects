#include "DataStructures.h"
#include <iostream>

Stack::Stack() {
    this->top = nullptr;
}

void Stack::push(double inputData) {
    Element* newElement = new Element();

    newElement->nextElement = nullptr;
    newElement->previousElement = this->top;
    newElement->data = inputData;
    this->top = newElement;

    std::cout << std::endl << inputData << " was added to the Stack";
    std::cout << std::endl;
}

void Stack::pop() {
    if (this->top == nullptr) {
        std::cerr << std::endl << "Stack is Empty";
        std::cout << std::endl;
    }
    else if (this->top->previousElement == nullptr) {
        std::cout << std::endl << this->top->data << " was Popped";
        std::cout << std::endl;

        this->top = nullptr;
    }
    else {
        std::cout << std::endl << this->top->data << " was Popped";
        std::cout << std::endl;

        this->top = this->top->previousElement;
        this->top->nextElement = nullptr;
    }
}

Element * Stack::topElement() {
    if (this->top == nullptr) {
        std::cerr << std::endl << "Stack is Empty";
        std::cout << std::endl;

        return nullptr;
    }
    else {
        return this->top;
    }
}

void Stack::display(Element *element) {
    if (element == nullptr) {
        return;
    }
    else {
        std::cout << std::endl << "Data: " << element->data;
        this->display(element->previousElement);
    }
}

void Stack::display() {
    if (this->top == nullptr) {
        std::cerr << std::endl << "Stack is Empty";
        std::cout << std::endl;
    }
    else {
        this->display(this->top);
    }

    std::cout << std::endl;
}