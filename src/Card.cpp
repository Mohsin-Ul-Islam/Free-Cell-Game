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

std::string Card::getEquivChar(const int& l_num)
{
  switch (l_num)
  {
    case 0:
      return "A";
    case 1:
      return "1";
    case 2:
      return "2";
    case 3:
      return "3";
    case 4:
      return "4";
    case 5:
      return "5";
    case 6:
      return "6";
    case 7:
      return "7";
    case 8:
      return "8";
    case 9:
      return "9";
    case 10:
      return "10";
    case 11:
      return "J";
    case 12:
      return "Q";
    case 13:
      return "K";
    default:
      return "N";
  }
}

void Card::init(const int& l_rank, const char& l_suit, const char& l_color)
{
  this->_rank  = l_rank;
  this->_suit  = l_suit;
  this->_color = l_color;
}

void Card::show()
{
  console.log("______");
  std::cout<<this->_color<<"  "<<this->_suit<<this->getEquivChar(this->_rank)<<std::endl;
}
