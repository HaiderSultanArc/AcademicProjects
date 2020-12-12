#include "Snake.h"

struct Cell {
      char content = ' ';
      char pointer = 'n';
      Segment *currentSegment = nullptr;
};

class Board {
private:
      int numberOfRows;
      int numberOfColumns;
      Cell **board;
      int score;

public:
      Snake snake;
      Board(int numberOfRows, int numberOfColumns);

      void initGame();
      void makeBoard();
      void generateFood();
      [[nodiscard]] bool endGame() const;
      bool moveSnake(int dx, int dy, char pointer);
      void renderBoard();
      static void clearScreen();
};