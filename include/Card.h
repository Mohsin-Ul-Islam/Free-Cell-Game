#ifndef CARD_H
#define CARD_H

class Card
{
  public:

    Card(const int& l_rank, const char& l_suit);
    Card(const Card& l_card);
    Card();
    int rank() const;
    char suit() const;
    void show() const;
    ~Card();

  private:

    int   _rank;
    char  _suit;

    void init(const int& l_rank, const char& l_suit);

};

#endif
