#include "FCG/Game.h"

Game::Game()
{

}

Game::~Game()
{

}

void Game::init()
{

    Deck deck(14*4);

    deck.pushCard(Card(0,'h'));
    deck.pushCard(Card(0,'c'));
    deck.pushCard(Card(0,'d'));
    deck.pushCard(Card(0,'s'));

    deck.pushCard(Card(1,'h'));
    deck.pushCard(Card(1,'c'));
    deck.pushCard(Card(1,'d'));
    deck.pushCard(Card(1,'s'));

    deck.pushCard(Card(2,'h'));
    deck.pushCard(Card(2,'c'));
    deck.pushCard(Card(2,'d'));
    deck.pushCard(Card(2,'s'));

    deck.pushCard(Card(3,'h'));
    deck.pushCard(Card(3,'c'));
    deck.pushCard(Card(3,'d'));
    deck.pushCard(Card(3,'s'));

    deck.pushCard(Card(4,'h'));
    deck.pushCard(Card(4,'c'));
    deck.pushCard(Card(4,'d'));
    deck.pushCard(Card(4,'s'));

    deck.pushCard(Card(5,'h'));
    deck.pushCard(Card(5,'c'));
    deck.pushCard(Card(5,'d'));
    deck.pushCard(Card(5,'s'));

    deck.pushCard(Card(6,'h'));
    deck.pushCard(Card(6,'c'));
    deck.pushCard(Card(6,'d'));
    deck.pushCard(Card(6,'s'));

    deck.pushCard(Card(7,'h'));
    deck.pushCard(Card(7,'c'));
    deck.pushCard(Card(7,'d'));
    deck.pushCard(Card(7,'s'));

    deck.pushCard(Card(8,'h'));
    deck.pushCard(Card(8,'c'));
    deck.pushCard(Card(8,'d'));
    deck.pushCard(Card(8,'s'));

    deck.pushCard(Card(9,'h'));
    deck.pushCard(Card(9,'c'));
    deck.pushCard(Card(9,'d'));
    deck.pushCard(Card(9,'s'));

    deck.pushCard(Card(10,'h'));
    deck.pushCard(Card(10,'c'));
    deck.pushCard(Card(10,'d'));
    deck.pushCard(Card(10,'s'));

    deck.pushCard(Card(11,'h'));
    deck.pushCard(Card(11,'c'));
    deck.pushCard(Card(11,'d'));
    deck.pushCard(Card(11,'s'));

    deck.pushCard(Card(12,'h'));
    deck.pushCard(Card(12,'c'));
    deck.pushCard(Card(12,'d'));
    deck.pushCard(Card(12,'s'));

    deck.pushCard(Card(13,'h'));
    deck.pushCard(Card(13,'c'));
    deck.pushCard(Card(13,'d'));
    deck.pushCard(Card(13,'s'));
    
    deck.display();

    this->_board->init(deck);
    return;
}

void Game::load()
{

}

void Game::turn()
{

}
