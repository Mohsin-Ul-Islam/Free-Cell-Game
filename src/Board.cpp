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

bool Board::validateMove(Deck& srcDeck, Deck& destDeck,const int& l_length)
{
  if(l_length <= 0)
  {
    console.warn("Can't move invalid number of cards.");
    return false;
  }

  if(srcDeck.length() <= 0)
  {
    console.warn("Source Deck is empty. Can't move a card.");
    return false;
  }

  if(destDeck.length() > 0)
  {
    Card destCard = destDeck.popCard();
    destDeck.pushCard(destCard);
    Card srcCard  = srcDeck.at(srcDeck.length() - 1 - l_length);

    if(destCard.color() == srcCard.color())
    {
      console.warn("Source and Destination cards of same color. Can't move a card");
      return false;
    }

    if(destCard.rank() <= srcCard.rank())
    {
      console.warn("Source card rank is higher than destination card. Can't move a card");
      return false;
    }

    if(destCard.rank() - srcCard.rank() > 1)
    {
      console.warn("Destination card rank is greater than 1 rank from source card. Can't move a card.");
      return false;
    }
  }

  return true;
}

void Board::moveTF(const int& l_srcTableau, const int& l_cardIndex,const int&  l_destFreeCell)
{
  if(!this->validateMove(this->_tableaus[l_srcTableau],this->_freeCells[l_destFreeCell],l_cardIndex)) return;

  for(int i = 0; i<l_cardIndex; i++)
  {
    this->_freeCells[l_destFreeCell].pushCard(this->_tableaus[l_srcTableau].popCard());
  }

  console.log("Move successfull.");
  return;
}
void Board::moveTT(const int& l_srcTableau, const int& l_cardIndex,const int&  l_destTableau)
{

  if(!this->validateMove(this->_tableaus[l_srcTableau],this->_tableaus[l_destTableau],l_cardIndex)) return;

  for(int i = 0; i<l_cardIndex; i++)
  {
    this->_tableaus[l_destTableau].pushCard(this->_tableaus[l_srcTableau].popCard());
  }

  console.log("Move successfull.");
  return;
}
void Board::moveFT(const int& l_srcFreeCell, const int& l_cardIndex,const int& l_destTableau)
{
  if(!this->validateMove(this->_freeCells[l_srcFreeCell],this->_tableaus[l_destTableau],l_cardIndex)) return;

  for(int i = 0; i<l_cardIndex; i++)
  {
    this->_tableaus[l_destTableau].pushCard(this->_freeCells[l_srcFreeCell].popCard());
  }

  return;
}
void Board::moveTH(const int& l_srcTableau, const int& l_cardIndex,const int&  l_destHomeCell)
{
  if(!this->validateMove(this->_tableaus[l_srcTableau],this->_homeCells[l_destHomeCell],l_cardIndex)) return;

  for(int i = 0; i<l_cardIndex; i++)
  {
    this->_homeCells[l_destHomeCell].pushCard(this->_tableaus[l_srcTableau].popCard());
  }

  return;
}
void Board::moveFH(const int& l_srcFreeCell, const int& l_cardIndex,const int& l_destHomeCell)
{
  if(!this->validateMove(this->_freeCells[l_srcFreeCell],this->_homeCells[l_destHomeCell],l_cardIndex)) return;

  for(int i = 0; i<l_cardIndex; i++)
  {
    this->_homeCells[l_destHomeCell].pushCard(this->_freeCells[l_srcFreeCell].popCard());
  }

  return;
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
