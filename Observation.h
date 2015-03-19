#ifndef __Observation__
#define __Observation__

#include "Room.h"
#include <string>

class Observation : public Room
{
  private:

  public:
      Observation() : Room("the observation deck", "a telescope", 5, "broken glasses", -5){};
      virtual ~Observation(){};
};

#endif 
