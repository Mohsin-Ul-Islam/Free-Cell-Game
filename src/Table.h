#include "Deck.h"

#ifndef TABLE_H
#define TABLE_H

class Table
{

  public:

    Table(const Deck& l_deck);
    Table();
    ~Table();
    bool moveTT(const int& l_srcTableau, const int& l_cardIndex,const int&  l_destTableau);
    bool moveTF(const int& l_srcTableau, const int& l_cardIndex,const int&  l_destFreeCell);
    bool moveFT(const int& l_srcFreeCell, const int& l_cardIndex,const int& l_destTableau);
    bool moveTH(const int& l_srcTableau, const int& l_cardIndex,const int&  l_destHomeCell);
    bool moveFH(const int& l_srcFreeCell, const int& l_cardIndex,const int& l_destHomeCell);

  private:

    Deck* _tableaus;
    Deck* _freeCells;
    Deck* _homeCells;

    void init(const Deck& l_deck);


};


#endif
