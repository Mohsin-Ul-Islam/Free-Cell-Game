#include <iostream>
#include <string>

#ifndef CONSOLE_H
#define CONSOLE_H

class Console
{

  public:

    Console();
    ~Console();
    void log(const std::string& l_msg);
    void warn(const std::string& l_msg);

  private:

    std::string* _history;

};

extern Console console;

#endif
