#include "FCG/Board.h"

Board::Board()
{

}

Board::Board(const Deck& l_deck)
{

}

Board::~Board()
{

}

void Board::init(const Deck& l_deck)
{

}

bool Board::moveTF(const int& l_srcTableau, const int& l_cardIndex,const int&  l_destFreeCell)
{
  return true;
}
bool Board::moveTT(const int& l_srcTableau, const int& l_cardIndex,const int&  l_destTableau)
{
  return true;
}
bool Board::moveFT(const int& l_srcFreeCell, const int& l_cardIndex,const int& l_destTableau)
{
  return true;
}
bool Board::moveTH(const int& l_srcTableau, const int& l_cardIndex,const int&  l_destHomeCell)
{
  return true;
}
bool Board::moveFH(const int& l_srcFreeCell, const int& l_cardIndex,const int& l_destHomeCell)
{
  return true;
}
