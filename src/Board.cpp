#include "Board.h"

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

bool Game::moveTF(const int& l_srcTableau, const int& l_cardIndex,const int&  l_destFreeCell)
{
  return true;
}
bool Game::moveTT(const int& l_srcTableau, const int& l_cardIndex,const int&  l_destTableau)
{
  return true;
}
bool Game::moveFT(const int& l_srcFreeCell, const int& l_cardIndex,const int& l_destTableau)
{
  return true;
}
bool Game::moveTH(const int& l_srcTableau, const int& l_cardIndex,const int&  l_destHomeCell)
{
  return true;
}
bool Game::moveFH(const int& l_srcFreeCell, const int& l_cardIndex,const int& l_destHomeCell)
{
  return true;
}
