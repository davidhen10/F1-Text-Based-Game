#ifndef PUZZLE_HPP
#define PUZZLE_HPP

class Puzzle {
 protected:
  // bool win = true;
 public:
  bool win = true;
  Puzzle();
  virtual ~Puzzle();
  virtual bool lose() { return win; }
};

#endif
