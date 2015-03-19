#ifndef __Coach__
#define __Coach__

#include "Room.h"
#include <string>

class Coach : public Room
{
  private:

  public:
      Coach() : Room("the coach car", "a silver coin", 5, "a phony coin", -5){};
      virtual ~Coach(){};
};

#endi
