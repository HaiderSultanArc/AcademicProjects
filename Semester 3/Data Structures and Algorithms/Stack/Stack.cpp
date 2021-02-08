#include "DataStructures.h"
#include <iostream>


Stack::Stack() {
    this->top = nullptr;
}

void Stack::push(char inputData) {
    Element* newElement = new Element();

    newElement->nextElement = nullptr;
    newElement->previousElement = this->top;
    newElement->data = inputData;
    this->top = newElement;
}

void Stack::pop() {
    if (this->top == nullptr) {
        std::cout << std::endl;
    }
    else if (this->top->previousElement == nullptr) {
        this->top = nullptr;
    }
    else {
        this->top = this->top->previousElement;
        this->top->nextElement = nullptr;
    }
}

Element * Stack::topElement() {
    if (this->top == nullptr) {
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
        std::cout << element->data;
        this->display(element->previousElement);
    }
}

void Stack::display() {
    if (this->top == nullptr) {
        std::cout << std::endl;
    }
    else {
        this->display(this->top);
    }

    std::cout << std::endl;
}