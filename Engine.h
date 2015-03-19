#ifndef __Engine__
#define __Engine__

#include "Room.h"

class Engine : public Room
{
  private:

  public:
      Engine() : Room("the engine room", "a gold coin", 10, "some coal", -10){};
      virtual ~Engine(){};
};

#endif 
