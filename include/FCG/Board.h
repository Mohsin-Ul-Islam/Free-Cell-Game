#include "Deck.h"

#ifndef BOARD_H
#define BOARD_H

class Board
{

  public:

    Board(const Deck& l_deck);
    Board();
    ~Board();
    void init(const Deck& l_deck);
    bool moveTT(const int& l_srcTableau, const int& l_cardIndex,const int&  l_destTableau);
    bool moveTF(const int& l_srcTableau, const int& l_cardIndex,const int&  l_destFreeCell);
    bool moveFT(const int& l_srcFreeCell, const int& l_cardIndex,const int& l_destTableau);
    bool moveTH(const int& l_srcTableau, const int& l_cardIndex,const int&  l_destHomeCell);
    bool moveFH(const int& l_srcFreeCell, const int& l_cardIndex,const int& l_destHomeCell);

  private:

    Deck* _tableaus;
    Deck* _freeCells;
    Deck* _homeCells;

};


#endif
