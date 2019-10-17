#include "Card.h"

#ifndef DECK_H
#define DECK_H

class Deck
{
  public:

    Deck();
    Deck(const int& l_size);
    Deck(const Deck& l_deck);
    void pushCard(const Card& l_card);
    Card popCard();
    inline Card at(const int& l_index) const {return l_index >=0 && l_index < this->_size ? this->_deck[l_index] : Card(0,'0');};
    inline int Size() const {return this->_size;};
    inline int length() const {return this->_length;};

    ~Deck();

  private:

    Card* _deck;
    int _size;
    int _length;

    inline bool isFull() {return this->_length == this->_size;};
    inline bool isEmpty() {return this->_length == 0;};
    void init(const int& l_size);

};

#endif
