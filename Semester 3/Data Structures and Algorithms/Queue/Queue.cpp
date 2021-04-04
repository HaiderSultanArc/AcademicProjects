#include "Queue.h"
#include <iostream>

Queue::Queue() {
    this->front = nullptr;
    this->rear = nullptr;
}

void Queue::enQueue(char inputData) {
    auto* newElement = new Element();

    newElement->previousElement = nullptr;
    newElement->data = inputData;

    if (this->front == nullptr) {
        this->front = newElement;
        this->rear = newElement;
    }
    else {
        this->rear->previousElement = newElement;
        this->rear = newElement;
    }
}

void Queue::deQueue() {
    Element *tempElement;

    tempElement = this->front;

    if (this->front == nullptr) {
        std::cout << std::endl;
    }
    else if (this->front->previousElement == nullptr) {
        this->front = nullptr;
    }
    else {
        this->front = this->front->previousElement;
    }

    delete tempElement;
}

char Queue::frontElementData() {
    if (this->front == nullptr) {
        return 0;
    }
    else {
        return this->front->data;
    }
}

bool Queue::isEmpty() {
    if (this->front == nullptr) {
        return true;
    }
    else {
        return false;
    }
}

void Queue::display(Element *element) {
    if (element == nullptr) {
        return;
    }
    else {
        std::cout << element->data;
        this->display(element->previousElement);
    }
}

void Queue::display() {
    if (this->front == nullptr) {
        std::cout << std::endl;
    }
    else {
        this->display(this->front);
    }

    std::cout << std::endl;
}