struct Segment {
      Segment *previousSegment = nullptr;
      char skin = 'o';
      char direction = 'n';
      int rowPos, columnPos;
      Segment *nextSegment = nullptr;
};

class Snake {
public:
      Segment *head;
      Segment *tail;

      Snake();

      void initializeSnake();
      void addSegment();
      void changeDirection(char direction, char currentDirection) const;

      ~Snake();
};