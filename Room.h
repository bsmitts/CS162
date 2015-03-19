#ifndef __Room__
#define __Room__

#include <string>

class Room
{
  private:
      std::string rName;
      std::string iName;
      std::string iName2;
      int iValue;
      int iValue2;
      int forward;
      int back;
      int left;
      int right;
      int above;
      Room* first;
      Room* compartment;
      Room* compartment2;
      Room* compartment3;
      Room* compartment4;

  public:
      Room (std::string rN, std::string iN, int iV, std::string iN2, int iV2);
      virtual ~Room() = 0;
      void setRoomName(std::string rN);
      void setItemName (std::string iN);
      void setItemName2 (std::string iN);
      void setItemValue(int iV);
      void setItemValue2(int iV2);
      void setForward(int f);
      void setBack(int b);
      void setLeft(int l);
      void setRight(int r);
      void setAbove(int a);
      void setFirst(Room* room);
      void setCompartment(Room* room);
      void setCompartment2(Room* room);
      void setCompartment3(Room* room);
      void setCompartment4(Room* room);
      std::string getRoomName() const;
      std::string getItemName() const;
      std::string getItemName2() const;
      int getItemValue() const;
      int getItemValue2() const;
      int getForward() const;
      int getBack() const;
      int getLeft() const;
      int getRight() const;
      int getAbove() const;
      Room* getFirst() const;
      Room* getCompartment() const;
      Room* getCompartment2() const;
      Room* getCompartment3() const;
      Room* getCompartment4() const;
};

#endif
