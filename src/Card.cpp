#include "FCG/Card.h"

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
  this->init(l_card.rank(),l_card.suit());
}

Card::~Card()
{

}

void Card::init(const int& l_rank, char const& l_suit)
{
  this->_rank = l_rank;
  this->_suit = l_suit;
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
