#include <iostream>
#include <string>
#include <stdlib.h>

#ifndef CONSOLE_H
#define CONSOLE_H

class Console
{

  public:

    Console();
    ~Console();
    void log(const std::string& l_msg);
    void warn(const std::string& l_msg);
    void clear();

  private:

    int _histories;
    std::string* _history;

    void push_hist(const std::string& l_msg);

};

extern Console console;

#endif
