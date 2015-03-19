CXX = g++
CXXFLAGS = -std=c++0x
PROGS = FinalProject

all: $(PROGS)
	
FinalProject: main.cpp BaggageCar.cpp Coach.cpp DiningCar.cpp Engine.cpp ExpressCar.cpp HorseCar.cpp LoungeCar.cpp Observation.cpp PostOffice.cpp Room.cpp SleepingCar.cpp
	${CXX} ${CXXFLAGS} main.cpp BaggageCar.cpp Coach.cpp DiningCar.cpp Engine.cpp ExpressCar.cpp HorseCar.cpp LoungeCar.cpp Observation.cpp PostOffice.cpp Room.cpp SleepingCar.cpp -o FinalProject
	

clean:
	rm -f $(PROGS) *.o *~
