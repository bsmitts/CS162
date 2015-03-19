#include "SleepingCar.h"
#include "PostOffice.h"
#include "Observation.h"
#include "LoungeCar.h"
#include "HorseCar.h"
#include "ExpressCar.h"
#include "Engine.h"
#include "DiningCar.h"
#include "Coach.h"
#include "BaggageCar.h"
#include <iostream>
#include <cstdlib>
#include <vector>

void startMessage()
{
    std::cout << std::endl << "Welcome aboard the C++ train." << std::endl;
    std::cout << "You have two objectives." << std::endl;
    std::cout << "1.  Collect all 9 unique items from the train cars." << std::endl;
    std::cout << "2.  Obtain a score of 50 or greater by the time you reach the front of the train." << std::endl;
    std::cout << "Each car has four compartments (back, left, right, and above)." << std::endl;
    std::cout << "Some compartments have items in them, some do not, and some are locked." << std::endl;
    std::cout << "Be careful which compartments you reach into as some items may reduce your score." << std::endl;
    std::cout << "Once you feel you have searched all necessary compartments, you may move forward to the next car." << std::endl;
}

int main(int argc, char const *argv[])
{
    char again = 'y';

	do
    {
	    Observation *observation;
	    DiningCar *dining;
	    Coach *coach;
	    SleepingCar *sleeping;
	    LoungeCar *lounge;
	    PostOffice *postOffice;
	    BaggageCar *baggage;
	    ExpressCar *express;
	    HorseCar *horse;
	    Engine *engine;
	    
	    observation = new Observation;
	    observation -> setForward(1);
	    observation -> setBack(2);
	    observation -> setLeft(4);
	    observation -> setRight(3);
	    observation -> setAbove(0);
	    observation -> setFirst(NULL);
	    observation -> setCompartment(observation);
	    observation -> setCompartment2(observation);
	    observation -> setCompartment3(observation);
	    observation -> setCompartment4(observation);

	    dining = new DiningCar;
	    dining -> setForward(1);
	    dining -> setBack(4);
	    dining -> setLeft(2);
	    dining -> setRight(3);
	    dining -> setAbove(0);
	    dining -> setFirst(NULL);
	    dining -> setCompartment(dining);
	    dining -> setCompartment2(dining);
	    dining -> setCompartment3(dining);
	    dining -> setCompartment4(dining);
	    observation -> setFirst(dining);

	    coach = new Coach;
	    coach -> setForward(1);
	    coach -> setBack(0);
	    coach -> setLeft(2);
	    coach -> setRight(4);
	    coach -> setAbove(3);
	    coach -> setFirst(NULL);
	    coach -> setCompartment(coach);
	    coach -> setCompartment2(coach);
	    coach -> setCompartment3(coach);
	    coach -> setCompartment4(coach);
	    dining -> setFirst(coach);
	    
	    sleeping = new SleepingCar;
	    sleeping -> setForward(1);
	    sleeping -> setBack(4);
	    sleeping -> setLeft(2);
	    sleeping -> setRight(3);
	    sleeping -> setAbove(0);
	    sleeping -> setFirst(NULL);
	    sleeping -> setCompartment(sleeping);
	    sleeping -> setCompartment2(sleeping);
	    sleeping -> setCompartment3(sleeping);
	    sleeping -> setCompartment4(sleeping);
	    coach -> setFirst(sleeping);

	    lounge = new LoungeCar;
	    lounge -> setForward(1);
	    lounge -> setBack(2);
	    lounge -> setLeft(3);
	    lounge -> setRight(0);
	    lounge -> setAbove(4);
	    lounge -> setFirst(NULL);
	    lounge -> setCompartment(lounge);
	    lounge -> setCompartment2(lounge);
	    lounge -> setCompartment3(lounge);
	    lounge -> setCompartment4(lounge);
	    sleeping -> setFirst(lounge);

	    postOffice = new PostOffice;
	    postOffice -> setForward(1);
	    postOffice -> setBack(0);
	    postOffice -> setLeft(3);
	    postOffice -> setRight(2);
	    postOffice -> setAbove(4);
	    postOffice -> setFirst(NULL);
	    postOffice -> setCompartment(postOffice);
	    postOffice -> setCompartment2(postOffice);
	    postOffice -> setCompartment3(postOffice);
	    postOffice -> setCompartment4(postOffice);
	    lounge -> setFirst(postOffice);

	    baggage = new BaggageCar;
	    baggage -> setForward(1);
	    baggage -> setBack(3);
	    baggage -> setLeft(2);
	    baggage -> setRight(0);
	    baggage -> setAbove(4);
	    baggage -> setFirst(NULL);
	    baggage -> setCompartment(baggage);
	    baggage -> setCompartment2(baggage);
	    baggage -> setCompartment3(baggage);
	    baggage -> setCompartment4(baggage);
	    postOffice -> setFirst(baggage);

	    express = new ExpressCar;
	    express -> setForward(1);
	    express -> setBack(2);
	    express -> setLeft(0);
	    express -> setRight(4);
	    express -> setAbove(3);
	    express -> setFirst(NULL);
	    express -> setCompartment(express);
	    express -> setCompartment2(express);
	    express -> setCompartment3(express);
	    express -> setCompartment4(express);
	    baggage -> setFirst(express);

	    horse = new HorseCar;
	    horse -> setForward(1);
	    horse -> setBack(0);
	    horse -> setLeft(2);
	    horse -> setRight(0);
	    horse -> setAbove(4);
	    horse -> setFirst(NULL);
	    horse -> setCompartment(horse);
	    horse -> setCompartment2(horse);
	    horse -> setCompartment3(horse);
	    horse -> setCompartment4(horse);
	    express -> setFirst(horse);

	    engine = new Engine;
	    engine -> setForward(0);
	    engine -> setBack(3);
	    engine -> setLeft(4);
	    engine -> setRight(2);
	    engine -> setAbove(1);
	    engine -> setFirst(NULL);
	    engine -> setCompartment(engine);
	    engine -> setCompartment2(engine);
	    engine -> setCompartment3(engine);
	    engine -> setCompartment4(engine);
	    horse -> setFirst(engine);

	    int total = 0;
	    std::vector<std::string> backpack(9);

        Room *r = observation;
        
        startMessage();
    
    	std::cout << "You step onto a passenger train..." << std::endl;
    	std::cout << "You have begun at the " << r -> getRoomName() << "." << std::endl << std::endl;

    	while (r -> getFirst() != NULL)
    	{
        	int choice;
    
        	std::cout << "Choose a direction..." << std::endl;
        	std::cout << "1 move forward" << std::endl;
        	std::cout << "2 look behind" << std::endl;
        	std::cout << "3 look left" << std::endl;
        	std::cout << "4 look right" << std::endl;
        	std::cout << "5 look above" << std::endl;
        	std::cin >> choice;
        

        	if (choice == 1 && r -> getForward() == 0)
        	{    
            	std::cout << "You cannot move forward in the " << r -> getRoomName() << "..." << std::endl;
            	std::cout << "Try again..." << std::endl;
        	}
        	else if (choice == 1 && r -> getForward() == 1)
            	r = r -> getFirst();
        	else if (choice == 1 && r -> getForward() == 2)
        	{    
            	r = r -> getCompartment();
            	std::cout << "You have opened up a compartment in the " << r -> getRoomName() << " containing " 
            	<< r -> getItemName() << " worth " << r -> getItemValue() << " points." << std::endl;
            	total += r -> getItemValue();
            	backpack.push_back(r -> getItemName());
            	r -> setForward(5);
        	}
        	else if (choice == 1 && r -> getForward() == 3)
        	{    
            	r = r -> getCompartment2();
            	std::cout << "You have opened up a compartment in the " << r -> getRoomName() << " containing nothing..." << std::endl;
            	std::cout << "Try again..." << std::endl;
            	r -> setForward(5);
        	}
        	else if (choice == 1 && r -> getForward() == 4)
        	{    
            	r = r -> getCompartment3();
            	std::cout << "You have opened up a compartment in the " << r -> getRoomName() << " containing" 
            	<< r -> getItemName2() << " worth " << r -> getItemValue2() << " points." << std::endl;
            	total += r -> getItemValue2();
            	std::cout << "You toss the item as it is worthless..." << std::endl;
            	r -> setForward(5);
        	}
        	else if (choice == 1 && r -> getForward() == 5)
        	{    
            	std::cout << "You have already checked this compartment..." << std::endl;
            	std::cout << "Try again..." << std::endl;
        	}

        	if (choice == 2 && r -> getBack() == 0)
        	{    
            	std::cout << "The back compartment in " << r -> getRoomName() << " appears to be locked..." << std::endl;
            	std::cout << "Try again..." << std::endl;
            	r -> setBack(5);
        	}
        	else if (choice == 2 && r -> getBack() == 1)
            	r = r -> getFirst();
        	else if (choice == 2 && r -> getBack() == 2)
        	{    
            	r = r -> getCompartment();
            	std::cout << "You have opened up a compartment in the " << r -> getRoomName() << " containing " 
            	<< r -> getItemName() << " worth " << r -> getItemValue() << " points." << std::endl;
            	total += r -> getItemValue();
            	backpack.push_back(r -> getItemName());
            	r -> setBack(5);
        	}
        	else if (choice == 2 && r -> getBack() == 3)
        	{    
            	r = r -> getCompartment2();
            	std::cout << "You have opened up a compartment in the " << r -> getRoomName() << " containing nothing..." << std::endl;
            	std::cout << "Try again..." << std::endl;
            	r -> setBack(5);
        	}
        	else if (choice == 2 && r -> getBack() == 4)
        	{    
            	r = r -> getCompartment3();
            	std::cout << "You have opened up a compartment in the " << r -> getRoomName() << " containing" 
            	<< r -> getItemName2() << " worth " << r -> getItemValue2() << " points." << std::endl;
            	total += r -> getItemValue2();
            	std::cout << "You toss the item as it is worthless..." << std::endl;
            	r -> setBack(5);
        	}
        	else if (choice == 2 && r -> getBack() == 5)
        	{    
            	std::cout << "You have already checked this compartment..." << std::endl;
            	std::cout << "Try again..." << std::endl;
        	}
        
        	if (choice == 3 && r -> getLeft() == 0)
        	{    
            	std::cout << "The left compartment in " << r -> getRoomName() << " appears to be locked..." << std::endl;
            	std::cout << "Try again..." << std::endl;
            	r -> setLeft(5);
        	}
        	else if (choice == 3 && r -> getLeft() == 1)
        		r = r -> getFirst();
        	else if (choice == 3 && r -> getLeft() == 2)
        	{    
            	r = r -> getCompartment();
            	std::cout << "You have opened up a compartment in the " << r -> getRoomName() << " containing " 
            	<< r -> getItemName() << " worth " << r -> getItemValue() << " points." << std::endl;
            	total += r -> getItemValue();
            	backpack.push_back(r -> getItemName());
            	r -> setLeft(5);
        	}
        	else if (choice == 3 && r -> getLeft() == 3)
        	{    
            	r = r -> getCompartment2();
            	std::cout << "You have opened up a compartment in the " << r -> getRoomName() << " containing nothing..." << std::endl;
            	std::cout << "Try again..." << std::endl;
            	r -> setLeft(5);
        	}
        	else if (choice == 3 && r -> getLeft() == 4)
        	{    
            	r = r -> getCompartment3();
            	std::cout << "You have opened up a compartment in the " << r -> getRoomName() << " containing " 
            	<< r -> getItemName2() << " worth " << r -> getItemValue2() << " points." << std::endl;
            	total += r -> getItemValue2();
            	std::cout << "You toss the item as it is worthless..." << std::endl;
            	r -> setLeft(5);
        	}
        	else if (choice == 3 && r -> getLeft() == 5)
        	{    
            	std::cout << "You have already checked this compartment..." << std::endl;
            	std::cout << "Try again..." << std::endl;
        	}
        
        
        	if (choice == 4 && r -> getRight() == 0)
        	{    
            	std::cout << "The right compartment in " << r -> getRoomName() << " appears to be locked..." << std::endl;
            	std::cout << "Try again..." << std::endl;
            	r -> setRight(5);
        	}
        	else if (choice == 4 && r -> getRight() == 1)
        		r = r -> getFirst();
        	else if (choice == 4 && r -> getRight() == 2)
        	{    
            	r = r -> getCompartment();
            	std::cout << "You have opened up a compartment in " << r -> getRoomName() << " containing " 
	            << r -> getItemName() << " worth " << r -> getItemValue() << " points." << std::endl;
	            total += r -> getItemValue();
	            backpack.push_back(r -> getItemName());
	            r -> setRight(5);
	        }
	        else if (choice == 4 && r -> getRight() == 3)
	        {    
	            r = r -> getCompartment2();
	            std::cout << "You have opened up a compartment in the " << r -> getRoomName() << " containing nothing..." << std::endl;
	            std::cout << "Try again..." << std::endl;
	            r -> setRight(5);
	        }
	        else if (choice == 4 && r -> getRight() == 4)
	        {    
	            r = r -> getCompartment3();
	            std::cout << "You have opened up a compartment in the " << r -> getRoomName() << " containing" 
	            << r -> getItemName2() << " worth " << r -> getItemValue2() << " points." << std::endl;
	            total += r -> getItemValue2();
	            std::cout << "You toss the item as it is worthless..." << std::endl;
	            r -> setRight(5);
	        }
	        else if (choice == 4 && r -> getRight() == 5)
        	{    
            	std::cout << "You have already checked this compartment..." << std::endl;
            	std::cout << "Try again..." << std::endl;
        	}

	        if (choice == 5 && r -> getAbove() == 0)
	        {    
	            std::cout << "The above compartment in " << r -> getRoomName() << " appears to be locked..." << std::endl;
	            std::cout << "Try again..." << std::endl;
	            r -> setAbove(5);
	        }
	        else if (choice == 5 && r -> getAbove() == 1)
	        	r = r -> getFirst();
	        else if (choice == 5 && r -> getAbove() == 2)
	        {    
	            r = r -> getCompartment();
	            std::cout << "You have opened up a compartment in " << r -> getRoomName() << " containing " 
	            << r -> getItemName() << " worth " << r -> getItemValue() << " points." << std::endl;
	            total += r -> getItemValue();
	            backpack.push_back(r -> getItemName());
	            r -> setAbove(5);
	        }
	        else if (choice == 5 && r -> getAbove() == 3)
	        {    
	            r = r -> getCompartment2();
	            std::cout << "You have opened up a compartment in the " << r -> getRoomName() << " containing nothing..." << std::endl;
	            std::cout << "Try again..." << std::endl;
	            r -> setAbove(5);
	        }
	        else if (choice == 5 && r -> getAbove() == 4)
	        {    
	            r = r -> getCompartment3();
	            std::cout << "You have opened up a compartment in the " << r -> getRoomName() << " containing" 
	            << r -> getItemName2() << " worth " << r -> getItemValue2() << " points." << std::endl;
	            total += r -> getItemValue2();
	            std::cout << "You toss the item as it is worthless..." << std::endl;
	            r -> setAbove(5);
	        }
	        else if (choice == 5 && r -> getAbove() == 5)
        	{    
            	std::cout << "You have already checked this compartment..." << std::endl;
            	std::cout << "Try again..." << std::endl;
        	}
		        

		        std::cout << "You are in " << r -> getRoomName() << "." << std::endl;

		}

		std::cout << std::endl << std::endl;

		if (backpack.size() < 9 && total < 50)
        {
            std::cout << "Sorry, you were only able to collect " << backpack.size() << " items worth " << total << " points." << std::endl;
            std::cout << "You lose..." << std::endl;
        }
        else if (backpack.size() < 9 && total >= 50)
        {
            std::cout << "Even though you got a total of " << total << " points, you only retrieved " << backpack.size() << " items." << std::endl;
            std::cout << "You lose..." << std::endl;
        }
        else if (backpack.size() == 9 && total < 50)
        {
            std::cout << "Even though you retrieved " << backpack.size() << " items, you only got " << total << " points." << std::endl;
            std::cout << "You lose..." << std::endl;
        }
        else if (backpack.size() == 9 && total >= 50)
        {
            std::cout << "You retrieved all " << backpack.size() << " items and got a total of " << total << " points." << std::endl;
            std::cout << "Congratulations, you win!!!" << std::endl;
        }

        std::cout << std::endl;

        std::cout << "You have collected: ";

		for (int i = 0; i < backpack.size(); i++)
		{
		    std::cout << backpack[i] << ", ";
		}

	    std::cout << std::endl << std::endl;

        total = 0;
        backpack.clear();

        delete observation;
	    delete dining;
	    delete coach;
	    delete sleeping;
	    delete lounge;
	    delete postOffice;
	    delete baggage;
	    delete express;
	    delete horse;
	    delete engine;

        std::cout << "Would you like to play again? (y/n)" << std::endl;
        std::cin >> again;

	}while (again == 'y' || again == 'Y');
	
	return 0;
}
