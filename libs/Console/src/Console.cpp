#include "Console/Console.h"

Console::Console()
{
}

Console::~Console()
{
  delete _history;
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

Console console;
