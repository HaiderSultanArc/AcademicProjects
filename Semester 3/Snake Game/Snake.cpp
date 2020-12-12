#include "Snake.h"

Snake::Snake() {
      this->head = nullptr;
      this->tail = nullptr;
}

void Snake::addSegment() {
      auto *newSegment = new Segment();

      newSegment->previousSegment = nullptr;
      newSegment->nextSegment = nullptr;

      if (this->head == nullptr) {
            this->head = newSegment;
            this->tail = newSegment;
            this->head->rowPos = 10;
            this->tail->columnPos = 10;
            this->head->skin = '@';
      }
      else {
            newSegment->previousSegment = this->tail;
            this->tail->nextSegment = newSegment;
            this->tail = newSegment;

            this->tail->direction = this->tail->previousSegment->direction;

            if (this->tail->direction == 'u') {
                  this->tail->rowPos = this->tail->previousSegment->rowPos + 1;
                  this->tail->columnPos = this->tail->previousSegment->columnPos;
            }
            else if (this->tail->direction == 'd') {
                  this->tail->rowPos = this->tail->previousSegment->rowPos - 1;
                  this->tail->columnPos = this->tail->previousSegment->columnPos;
            }
            else if (this->tail->direction == 'l') {
                  this->tail->rowPos = this->tail->previousSegment->rowPos;
                  this->tail->columnPos = this->tail->previousSegment->columnPos + 1;
            }
            else if (this->tail->direction == 'r') {
                  this->tail->rowPos = this->tail->previousSegment->rowPos;
                  this->tail->columnPos = this->tail->previousSegment->columnPos - 1;
            }
      }
}

void Snake::initializeSnake() {
      this->head = nullptr;
      this->tail = nullptr;

      addSegment();
}

void Snake::changeDirection(char direction, char currentDirection) const {
      if (direction == 'W' or direction == 'w' and currentDirection != 'd') {
            this->head->direction = 'u';
      }
      else if (direction == 'A' or direction == 'a' and currentDirection != 'r') {
            this->head->direction = 'l';
      }
      else if (direction == 'S' or direction == 's' and currentDirection != 'u') {
            this->head->direction = 'd';
      }
      else if (direction == 'D' or direction == 'd' and currentDirection != 'l') {
            this->head->direction = 'r';
      }
      else if (direction == 'q' or direction == 'Q') {
            this->head->direction = 'q';
      }
}

Snake::~Snake() {
    Segment* currentSegment, *temp;

    if (this->head != nullptr) {
        currentSegment = this->head->nextSegment;

        while (currentSegment->nextSegment != nullptr) {
            temp = currentSegment->nextSegment;
            delete currentSegment;
            currentSegment = temp;
        }
    }
}