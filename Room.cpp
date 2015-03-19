#include "Room.h"
#include <string>

Room::Room(std::string rN, std::string iN, int iV, std::string iN2, int iV2)
{
    rName = rN;
    iName = iN;
    iValue = iV;
    iName2 = iN2;
    iValue2 = iV2;
}

Room::~Room()
{
    
}

void Room::setRoomName(std::string rN)
{
    rName = rN;    
}

void Room::setItemName(std::string iN)
{
    iName = iN;    
}

void Room::setItemName2(std::string iN2)
{
    iName2 = iN2;    
}

void Room::setItemValue(int iV)
{
    iValue = iV;    
}

void Room::setItemValue2(int iV2)
{
    iValue2 = iV2;    
}

void Room::setForward(int f)
{
    forward = f;    
}

void Room::setBack(int b)
{
    back = b;
}

void Room::setLeft(int l)
{
    left = l;
}

void Room::setRight(int r)
{
    right = r;    
}

void Room::setAbove(int a)
{
    above = a;    
}

void Room::setFirst(Room* room)
{
    this -> first = room;    
}

void Room::setCompartment(Room* room)
{
    this -> compartment = room;    
}

void Room::setCompartment2(Room* room)
{
    this -> compartment2 = room;    
}

void Room::setCompartment3(Room* room)
{
    this -> compartment3 = room;    
}

void Room::setCompartment4(Room* room)
{
    this -> compartment4 = room;    
}

std::string Room::getRoomName() const
{
    return rName;
}

std::string Room::getItemName() const
{
    return iName;
}

std::string Room::getItemName2() const
{
    return iName2;
}
      
int Room::getItemValue() const
{
    return iValue;
}

int Room::getItemValue2() const
{
    return iValue2;
}

int Room::getForward() const
{
    return forward;
}

int Room::getBack() const
{
    return back;
}

int Room::getLeft() const
{
    return left;
}

int Room::getRight() const
{
    return right;
}

int Room::getAbove() const
{
    return above;
}

Room* Room::getFirst() const
{
    return this -> first;
}

Room* Room::getCompartment() const
{
    return this -> compartment;
}

Room* Room::getCompartment2() const
{
    return this -> compartment2;
}
Room* Room::getCompartment3() const
{
    return this -> compartment3;
}

Room* Room::getCompartment4() const
{
    return this -> compartment4;
}
