#include "Card.h"

Card::Card(const int& l_rank, const char& l_suit)
{
  this->init(l_rank,l_suit);
}

Card::Card()
{
  this->init(0,'0');
}

Card::Card(const Card& l_card)
{
  this._rank = l_card.rank();
  this._suit = l_card.suit();
}

Card::~Card()
{

}

int Card::rank() const
{
  return this->_rank;
}

char Card::suit() const
{
  return this->_suit;
}

void Card::show() const
{
  
}
