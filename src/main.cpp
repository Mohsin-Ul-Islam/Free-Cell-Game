#include <iostream>
#include "FCG/Game.h"

using namespace std;

int startMenu()
{
  int choice = 0;

  do
  {
    cout<<"1- Start a new game."<<endl;
    cout<<"2- Load a game."<<endl;

    cin>>choice;

  }while(choice < 1 || choice > 2);


  return choice;

}

int main()
{

  Game game;

  int choice = startMenu();

  if(choice == 1)
  {
    game.init();
  }
  else
  {
    game.load();
  }

  while(!game.isEnd())
  {
    game.turn();
  }

  return 0;
}
