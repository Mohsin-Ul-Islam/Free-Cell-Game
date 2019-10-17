#include "Board.h"

#ifndef GAME_H
#define GAME_H

class Game
{
  public:

    Game();
    ~Game();
    void init();
    void load();
    void turn();
    inline bool isEnd() const {return _isEnd;};

  private:

    Board* _board;
    bool   _isEnd;

};

#endif
