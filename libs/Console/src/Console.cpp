#include "Console/Console.h"

Console::Console()
{
  this->_history = new std::string[10];
  this->_histories = 0;
}

Console::~Console()
{
  delete this->_history;
}

void Console::push_hist(const std::string& l_msg)
{
  this->_history[this->_histories] = l_msg;
  this->_histories = (this->_histories + 1) % 10;
}

void Console::log(const std::string& l_msg)
{
  std::cout<<l_msg<<std::endl;
  return;
}

void Console::warn(const std::string& l_msg)
{
  std::cout<<"[!] "<<l_msg<<std::endl;
  return;
}

void Console::clear()
{
  system("clear");
}

Console console;
