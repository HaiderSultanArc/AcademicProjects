#include "Screen.h"
#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

void menu(int &menuOption);

int main() {
      int menuOption;
      int numberOfRows = 20, numberOfColumns = 30, gameSpeed = 1;

      do {
            menu(menuOption);

            if (menuOption == 1) {
                  Board board(numberOfRows, numberOfColumns);

                  board.initGame();

                  while (true) {
                        if (_kbhit()) {
                              board.snake.changeDirection(char(_getch()), board.snake.head->direction);
                        }

                        if (board.snake.head->direction == 'u') {
                              if (not board.moveSnake(0, -1, 'u')) {
                                    break;
                              }
                        }
                        else if (board.snake.head->direction == 'd') {
                              if (not board.moveSnake(0, 1, 'd')) {
                                    break;
                              }
                        }
                        else if (board.snake.head->direction == 'l') {
                              if (not board.moveSnake(-1, 0, 'l')) {
                                    break;
                              }
                        }
                        else if (board.snake.head->direction == 'r') {
                              if (not board.moveSnake(1, 0, 'r')) {
                                    break;
                              }
                        }
                        else if (board.snake.head->direction == 'q') {
                              break;
                        }

                        board.renderBoard();
                        Sleep(gameSpeed * 30);
                  }

                  board.snake.~Snake();
            }
            else if (menuOption == 2) {
                  Board::clearScreen();
                  cout << endl << "Enter Height of the Screen (Between 15 and 35) {init: 20} : ";
                  cin >> numberOfRows;
                  cout << endl << endl << "Enter Width of Screen (Between 15 and 60) {init: 30} : ";
                  cin >> numberOfColumns;
                  cout << endl << endl << "Enter Game Speed (Between 1 (fastese) and 10 (slowest)) {init: 1} : ";
                  cin >> gameSpeed;
            }
            else if (menuOption == 3) {
                  break;
            }

      } while (menuOption != 3);
}

void menu(int &menuOption) {
      Board::clearScreen();

      cout << endl << endl << "****************************************************************************************************" << endl;
      cout << "\t\t\t\t\t\tMAIN MENU" << endl;
      cout << "\t\t\t1) Start Game" << endl;
      cout << "\t\t\t2) Settings" << endl;
      cout << "\t\t\t3) Quit" << endl;
      cout << "\t\t\t() Your Option: ";
      cin >> menuOption;
      cout << endl << "****************************************************************************************************" << endl << endl;
}