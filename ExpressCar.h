#ifndef __ExpressCar__
#define __ExpressCar__

#include "Room.h"
#include <string>

class ExpressCar : public Room
{
  private:

  public:
      ExpressCar() : Room("the express car", "a generic watch", 5, "a broken watch", -5){};
      virtual ~ExpressCar(){};
};

#endif 
