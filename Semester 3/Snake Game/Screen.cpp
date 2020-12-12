#include "Screen.h"
#include <windows.h>
#include <random>
#include <ctime>
#include <iostream>

Board::Board(int numberOfRows, int numberOfColumns) {
      this->numberOfRows = numberOfRows;
      this->numberOfColumns = numberOfColumns;
      this->score = 0;

      this->board = new Cell * [numberOfRows];

      for (int row = 0; row < numberOfRows; row++) {
            this->board[row] = new Cell[numberOfColumns];
      }
}

void Board::initGame() {
      Board::clearScreen();

      std::cout << std::endl << std::endl << "Controls: Use W/A/S/D to move the Snake" << std::endl;
      std::cout << "Press Q to Quit!" << std::endl;
      std::cout << std::endl << "Generating Game";

      Sleep(100);
      std::cout << ".";
      this->snake.~Snake();

      Sleep(100);
      std::cout << ".";
      this->snake.initializeSnake();

      Sleep(100);
      std::cout << "." << std::endl;
      this->generateFood();

      Sleep(1000);
      std::cout << std::endl << "Loading";

      Sleep(100);
      std::cout << ".";
      this->score = 0;

      Sleep(100);
      std::cout << ".";
      this->snake.head->direction = 'n';

      Sleep(100);
      std::cout << "." << std::endl;

      for (int row = 0; row < this->numberOfRows; row++) {
            for (int column = 0; column < this->numberOfColumns; column++) {
                  this->board[row][column].content = ' ';
            }
      }

      Sleep(1000);
      std::cout << std::endl << "Game is Ready! Press Enter Key to Continue :)" << std::endl << std::endl;
      std::cin.ignore();
      std::cin.ignore();
}

void Board::clearScreen() {
      COORD topLeft = {0, 0};
      HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO screen;
      DWORD written;

      GetConsoleScreenBufferInfo(console, &screen);

      FillConsoleOutputCharacterA(console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written);

      FillConsoleOutputAttribute(console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE, screen.dwSize.X * screen.dwSize.Y, topLeft, &written);

      SetConsoleCursorPosition(console, topLeft);
}

void Board::generateFood() {
      int foodCoordRow, foodCoordColumn;
      static int foodCount = 0, foodControl = 5;

      srand(time(nullptr));
      std::mt19937 mt(rand());
      std::uniform_int_distribution<int> rowCoord(1, this->numberOfRows - 1);
      std::uniform_int_distribution<int> columnCoord(1, this->numberOfColumns - 1);

      foodCoordRow = rowCoord(mt);
      foodCoordColumn = columnCoord(mt);

      this->board[foodCoordRow][foodCoordColumn].content = '*';

      if (++foodCount % foodControl == 0) {
            foodCoordRow = rowCoord(mt);
            foodCoordColumn = columnCoord(mt);
            this->board[foodCoordRow][foodCoordColumn].content = 'O';
            foodControl++;
            foodCount = 0;
      }
}

bool Board::endGame() const {
      clearScreen();

      std::cout << std::endl << std::endl << "****************************************************************************************************" << std::endl;
      std::cout << std::endl << "\t\t\t\t\t  Your Score is: " << this->score;
      std::cout << std::endl << std::endl << "****************************************************************************************************" << std::endl;
      std::cout << std::endl << std::endl << "Press Enter Key to Continue!";
      std::cin.ignore();

      return false;
}

bool Board::moveSnake(int dx, int dy, char pointer) {
      this->board[this->snake.head->rowPos][this->snake.head->columnPos].pointer = pointer;

      this->snake.head->columnPos += dx;
      this->snake.head->rowPos += dy;

      Segment *currentSegment;

      currentSegment = this->snake.head->nextSegment;

      while (currentSegment != nullptr) {
            if (currentSegment->direction == 'u') {
                  currentSegment->rowPos -= 1;
            }
            else if (currentSegment->direction == 'd') {
                  currentSegment->rowPos += 1;
            }
            else if (currentSegment->direction == 'l') {
                  currentSegment->columnPos -= 1;
            }
            else if (currentSegment->direction == 'r') {
                  currentSegment->columnPos += 1;
            }

            currentSegment = currentSegment->nextSegment;
      }

      if (this->board[this->snake.head->rowPos][this->snake.head->columnPos].content == '*') {
            this->snake.addSegment();
            this->score++;
      }
      else if (this->board[this->snake.head->rowPos][this->snake.head->columnPos].content == 'O') {
            this->snake.addSegment();
            this->score += 5;
      }
      else if ((this->board[this->snake.head->rowPos][this->snake.head->columnPos].content == 'X') or (this->board[this->snake.head->rowPos][this->snake.head->columnPos].content == 'o')) {
            std::cout << std::endl << std::endl << "Snake Died! Press Enter Key to See Your Score!" << std::endl << std::endl;
            std::cin.ignore();
            return endGame();
      }

      clearScreen();

      return true;
}

void Board::makeBoard() {
      Segment *currentSegment;

      currentSegment = this->snake.head;

      bool foodFound = false;

      for (int row = 0; row < this->numberOfRows; row++) {
            for (int column = 0; column < this->numberOfColumns; column++) {
                  if (row == 0 or column == 0 or row == this->numberOfRows - 1 or column == this->numberOfColumns - 1) {
                        this->board[row][column].content = 'X';
                  }
                  else if (this->board[row][column].content != '*' and this->board[row][column].content != 'O') {
                        this->board[row][column].content = ' ';
                  }
                  else {
                        foodFound = true;
                  }
            }
      }

      if (not foodFound) {
            generateFood();
      }

      while (currentSegment != nullptr) {
            this->board[currentSegment->rowPos][currentSegment->columnPos].currentSegment = currentSegment;
            this->board[currentSegment->rowPos][currentSegment->columnPos].content = currentSegment->skin;
            currentSegment = currentSegment->nextSegment;
      }

      for (int row = 0; row < this->numberOfRows; row++) {
            for (int column = 0; column < this->numberOfColumns; column++) {
                  if (this->board[row][column].pointer != 'n' and this->board[row][column].currentSegment != nullptr) {
                        this->board[row][column].currentSegment->direction = this->board[row][column].pointer;
                  }

                  if (this->board[row][column].currentSegment == this->snake.tail) {
                        this->board[row][column].pointer = 'n';
                  }
            }
      }
}

void Board::renderBoard() {
      clearScreen();

      makeBoard();

      for (int row = 0; row < this->numberOfRows; row++) {
            for (int column = 0; column < this->numberOfColumns; column++) {
                  std::cout << this->board[row][column].content;

                  if (column == this->numberOfColumns - 1) {
                        std::cout << std::endl;
                  }
            }
      }
}