#ifndef __HorseCar__
#define __HorseCar__

#include "Room.h"
#include <string>

class HorseCar : public Room
{
  private:

  public:
      HorseCar() : Room("the horse car", "gold stirrups", 10, "broken stirrups", -10){};
      ~HorseCar(){};
};

#endif
