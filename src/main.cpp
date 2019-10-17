#include <iostream>
#include "FCG/Game.h"

using namespace std;

string getEquivChar(const int& l_num)
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
  string fileName = "cards.txt";

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
