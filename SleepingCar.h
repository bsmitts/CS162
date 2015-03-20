#ifndef __SleepingCar__
#define __SleepingCar__

#include "Room.h"
#include <string>

class SleepingCar : public Room
{
  private:

  public:
      SleepingCar() : Room("the sleeping car", "a silk blanket", 5, "a torn blanket", -5){};
      virtual ~SleepingCar(){};
};

#endif 
