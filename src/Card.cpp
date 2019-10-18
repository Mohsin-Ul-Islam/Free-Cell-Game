#include "FCG/Card.h"

Card::Card(const int& l_rank, const char& l_suit, const char& l_color)
{
  this->init(l_rank,l_suit,l_color);
}

Card::Card()
{
  this->init(0,'0','N');
}

Card::Card(const Card& l_card)
{
  this->init(l_card.rank(),l_card.suit(),l_card.color());
}

Card::~Card()
{

}

void Card::init(const int& l_rank, const char& l_suit, const char& l_color)
{
  this->_rank  = l_rank;
  this->_suit  = l_suit;
  this->_color = l_color;
}

void Card::show() const
{
  std::cout<<this->_suit<<" "<<this->_rank<<" "<<this->_color<<std::endl;
}
