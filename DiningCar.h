#ifndef __DiningCar__
#define __DiningCar__

#include "Room.h"
#include <string>

class DiningCar : public Room
{
  private:

  public:
      DiningCar() : Room("the dining car", "a gold plate", 10, "a broken plate", -10){};
      virtual ~DiningCar(){};
};

#end
