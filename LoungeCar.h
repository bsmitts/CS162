#ifndef __LoungeCar__
#define __LoungeCar__

#include "Room.h"

class LoungeCar : public Room
{
  private:

  public:
      LoungeCar() : Room("the lounge car", "a gold jacket", 10, "a ripped jacket", -10){};
      virtual ~LoungeCar(){};
};

#endif 
