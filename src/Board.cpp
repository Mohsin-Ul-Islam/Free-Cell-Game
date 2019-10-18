#include "FCG/Board.h"

Board::Board()
{
  this->_tableaus  = new Deck[8];
  this->_freeCells = new Deck[4];
  this->_homeCells = new Deck[4];
}

Board::Board(const Deck& l_deck)
{
  this->init(l_deck);
}

Board::~Board()
{
  delete[] this->_tableaus;
  delete[] this->_freeCells;
  delete[] this->_homeCells;
}

void Board::init(const Deck& l_deck)
{
  int i = 0;
  for(i; i<7; ++i)
  {
    this->_tableaus[0].pushCard(l_deck.at(i));
  }
  for(i; i<14; ++i)
  {
    this->_tableaus[1].pushCard(l_deck.at(i));
  }
  for(i; i<21; ++i)
  {
    this->_tableaus[2].pushCard(l_deck.at(i));
  }
  for(i; i<28; ++i)
  {
    this->_tableaus[3].pushCard(l_deck.at(i));
  }
  for(i; i<34; ++i)
  {
    this->_tableaus[4].pushCard(l_deck.at(i));
  }
  for(i; i<40; ++i)
  {
    this->_tableaus[5].pushCard(l_deck.at(i));
  }
  for(i; i<46; ++i)
  {
    this->_tableaus[6].pushCard(l_deck.at(i));
  }
  for(i; i<52; ++i)
  {
    this->_tableaus[7].pushCard(l_deck.at(i));
  }
}

bool Board::moveTF(const int& l_srcTableau, const int& l_cardIndex,const int&  l_destFreeCell)
{

  if(this->_tableaus[l_srcTableau].length() == 0)
  {
    return false;
  }

  if(this->_freeCells[l_destFreeCell].length() > 0)
  {
    Card destCard = this->_freeCells[l_destFreeCell].popCard();
    this->_freeCells[l_destFreeCell].pushCard(destCard);
    Card srcCard  = this->_tableaus[l_srcTableau].at(this->_tableaus[l_srcTableau].length() - 1 - l_cardIndex);

    if(destCard.color() == srcCard.color())
    {
      return false;
    }

    if(destCard.rank() <= srcCard.rank())
    {
      return false;
    }
  }

  for(int i = 0; i<l_cardIndex; i++)
  {
    this->_freeCells[l_destFreeCell].pushCard(this->_tableaus[l_srcTableau].popCard());
  }

  return true;
}
bool Board::moveTT(const int& l_srcTableau, const int& l_cardIndex,const int&  l_destTableau)
{

  for(int i = 0; i<l_cardIndex; i++)
  {
    this->_tableaus[l_destTableau].pushCard(this->_tableaus[l_srcTableau].popCard());
  }

  return true;
}
bool Board::moveFT(const int& l_srcFreeCell, const int& l_cardIndex,const int& l_destTableau)
{
  for(int i = 0; i<l_cardIndex; i++)
  {
    this->_tableaus[l_destTableau].pushCard(this->_freeCells[l_srcFreeCell].popCard());
  }

  return true;
}
bool Board::moveTH(const int& l_srcTableau, const int& l_cardIndex,const int&  l_destHomeCell)
{
  for(int i = 0; i<l_cardIndex; i++)
  {
    this->_homeCells[l_destHomeCell].pushCard(this->_tableaus[l_srcTableau].popCard());
  }

  return true;
}
bool Board::moveFH(const int& l_srcFreeCell, const int& l_cardIndex,const int& l_destHomeCell)
{
  for(int i = 0; i<l_cardIndex; i++)
  {
    this->_homeCells[l_destHomeCell].pushCard(this->_freeCells[l_srcFreeCell].popCard());
  }

  return true;
}

void Board::display()
{
  for(int i = 0; i<8; i++)
  {
    std::cout<<"Tableau number: "<<i + 1<<std::endl;
    this->_tableaus[i].display();
  }
  for(int i = 0; i<4; i++)
  {
    std::cout<<"Home Cell number: "<<i + 1<<std::endl;
    this->_homeCells[i].display();
  }
  for(int i = 0; i<4; i++)
  {
    std::cout<<"Free Cell number: "<<i + 1<<std::endl;
    this->_freeCells[i].display();
  }

}
