#ifndef __BaggageCar__
#define __BaggageCar__

#include "Room.h"

class BaggageCar : public Room
{
  private:

  public:
      BaggageCar(): Room("the baggage car", "a MacBook Pro", 10, "a broken calculator", -5){};
      virtual ~BaggageCar(){};
};

#endif 
