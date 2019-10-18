#include <iostream>
#include "Console/Console.h"

#ifndef CARD_H
#define CARD_H

class Card
{
  public:

    Card(const int& l_rank, const char& l_suit, const char& l_color);
    Card(const Card& l_card);
    Card();
    inline int  rank()  const {return this->_rank;};
    inline char suit()  const {return this->_suit;};
    inline char color() const {return this->_color;};
    void show() const;
    ~Card();

  private:

    int   _rank;
    char  _suit;
    char _color;

    void init(const int& l_rank, const char& l_suit, const char& l_color);

};

#endif
