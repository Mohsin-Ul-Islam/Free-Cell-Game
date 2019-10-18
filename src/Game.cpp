#include "FCG/Game.h"

Game::Game()
{
  this->_isEnd = false;
  this->_board = new Board();
}

Game::~Game()
{
  delete this->_board;
}

void Game::init()
{

    Deck deck(14*4);

    deck.pushCard(Card(0,'h','R'));
    deck.pushCard(Card(0,'c','B'));
    deck.pushCard(Card(0,'d','R'));
    deck.pushCard(Card(0,'s','B'));

    deck.pushCard(Card(1,'h','R'));
    deck.pushCard(Card(1,'c','B'));
    deck.pushCard(Card(1,'d','R'));
    deck.pushCard(Card(1,'s','B'));

    deck.pushCard(Card(2,'h','R'));
    deck.pushCard(Card(2,'c','B'));
    deck.pushCard(Card(2,'d','R'));
    deck.pushCard(Card(2,'s','B'));

    deck.pushCard(Card(3,'h','R'));
    deck.pushCard(Card(3,'c','B'));
    deck.pushCard(Card(3,'d','R'));
    deck.pushCard(Card(3,'s','B'));

    deck.pushCard(Card(4,'h','R'));
    deck.pushCard(Card(4,'c','B'));
    deck.pushCard(Card(4,'d','R'));
    deck.pushCard(Card(4,'s','B'));

    deck.pushCard(Card(5,'h','R'));
    deck.pushCard(Card(5,'c','B'));
    deck.pushCard(Card(5,'d','R'));
    deck.pushCard(Card(5,'s','B'));

    deck.pushCard(Card(6,'h','R'));
    deck.pushCard(Card(6,'c','B'));
    deck.pushCard(Card(6,'d','R'));
    deck.pushCard(Card(6,'s','B'));

    deck.pushCard(Card(7,'h','R'));
    deck.pushCard(Card(7,'c','B'));
    deck.pushCard(Card(7,'d','R'));
    deck.pushCard(Card(7,'s','B'));

    deck.pushCard(Card(8,'h','R'));
    deck.pushCard(Card(8,'c','B'));
    deck.pushCard(Card(8,'d','R'));
    deck.pushCard(Card(8,'s','B'));

    deck.pushCard(Card(9,'h','R'));
    deck.pushCard(Card(9,'c','B'));
    deck.pushCard(Card(9,'d','R'));
    deck.pushCard(Card(9,'s','B'));

    deck.pushCard(Card(10,'h','R'));
    deck.pushCard(Card(10,'c','B'));
    deck.pushCard(Card(10,'d','R'));
    deck.pushCard(Card(10,'s','B'));

    deck.pushCard(Card(11,'h','R'));
    deck.pushCard(Card(11,'c','B'));
    deck.pushCard(Card(11,'d','R'));
    deck.pushCard(Card(11,'s','B'));

    deck.pushCard(Card(12,'h','R'));
    deck.pushCard(Card(12,'c','B'));
    deck.pushCard(Card(12,'d','R'));
    deck.pushCard(Card(12,'s','B'));

    deck.pushCard(Card(13,'h','R'));
    deck.pushCard(Card(13,'c','B'));
    deck.pushCard(Card(13,'d','R'));
    deck.pushCard(Card(13,'s','B'));

    this->_board->init(deck);
    return;
}

void Game::load()
{

}

void Game::save()
{

}

void Game::turn()
{
  console.clear();

  this->_board->display();

  console.log("Press 1 for Tableau to Tableau move");
  console.log("Press 2 for Tableau to Free Cell move");
  console.log("Press 3 for Free Cell to Tableau move");
  console.log("Press 4 for Tableau to Home Cell move");
  console.log("Press 5 for Free Cell to Home Cell move");
  console.log("Press 6 to exit.");

  int choice;
  int source;
  int dest;
  int len;

  bool moved = false;

  do
  {
    std::cin>>choice;

  }while(choice < 1 || choice > 6);

  console.log("Enter source number.");
  std::cin>>source;

  console.log("Enter dest number.");
  std::cin>>dest;

  console.log("Enter number of cards to be moved.");
  std::cin>>len;

  switch (choice)
  {
    case 1:
      moved = this->_board->moveTT(source - 1,len,dest - 1);
      break;
    case 2:
      moved = this->_board->moveTF(source - 1,len,dest - 1);
      break;
    case 3:
      moved = this->_board->moveFT(source - 1,len,dest - 1);
      break;
    case 4:
      moved = this->_board->moveTH(source - 1,len,dest - 1);
      break;
    case 5:
      moved = this->_board->moveFH(source - 1,len,dest - 1);
      break;
    case 6:
      this->_isEnd = true;
      break;
  }

  if(!moved)
  {
    console.warn("Invalid move.");
  }

  return;

}
