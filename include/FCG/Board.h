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
    void display();
    void moveTT(const int& l_srcTableau, const int& l_cardIndex,const int&  l_destTableau);
    void moveTF(const int& l_srcTableau, const int& l_cardIndex,const int&  l_destFreeCell);
    void moveFT(const int& l_srcFreeCell, const int& l_cardIndex,const int& l_destTableau);
    void moveTH(const int& l_srcTableau, const int& l_cardIndex,const int&  l_destHomeCell);
    void moveFH(const int& l_srcFreeCell, const int& l_cardIndex,const int& l_destHomeCell);

  private:

    bool validateMove(Deck& srcDeck,Deck& destDeck, const int& l_length);

    Deck* _tableaus;
    Deck* _freeCells;
    Deck* _homeCells;

};


#endif
