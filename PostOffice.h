#ifndef __PostOffice__
#define __PostOffice__

#include "Room.h"
#include <string>

class PostOffice : public Room
{
  private:

  public:
      PostOffice() : Room("the post office car", "a paycheck", 10, "taxes", -10){};
      virtual ~PostOffice(){};
};

#endif 
