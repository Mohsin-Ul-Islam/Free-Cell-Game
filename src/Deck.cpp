#include "Deck.h"

Deck::Deck()
{
  this->init(1);
}

Deck::Deck(const int& l_size)
{
  this->init(l_size);
}

Deck::Deck(const Deck& l_deck)
{
  int num_of_cards = l_deck.length() - 1;

  for(num_of_cards; num_of_cards >=0; num_of_cards--)
  {
    this->pushCard(l_deck.at(num_of_cards));
  }
}

Deck::~Deck()
{
  delete[] this->_deck;
}

void Deck::init(const int& l_size)
{
  this->_size = l_size;
  this->length = 0;
  if(!this->_size) return;
  _deck = new Card[this->_size];
}

void Deck::pushCard(const Card& l_card)
{
  if(!this->isFull())
  {
    this->_deck[this->_length] = l_card;
    this->_length++;
  }

  return;
}

Card Deck::popCard()
{
  if(!this->isEmpty())
  {
    this->_length--;
    return this->_deck[this->_length];
  }

  return Card(0,'0');
}
