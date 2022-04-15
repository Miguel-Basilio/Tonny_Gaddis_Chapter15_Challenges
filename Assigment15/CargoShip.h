#pragma once
#include "Ship.h"


class CargoShip : public Ship
{
private:
    int capacity;
public:
    CargoShip()
    {
        capacity = 0;
    }
    void setCapacity(int c)
    {
        capacity = c;
    }
    int getCapacity()
    {
        return capacity;
    }
    virtual void print()
    {
        //NOTE: for an unknown reason it is asking to add the '&' to Ship::getName and as a result is breaking the code,
        //this was coded during class and after checking the zoom video everything is as the proffesor did it,
        //if you can let me know why on my code it asks for '&' ill appreciated it!
        cout << "May ship name is: " << &Ship::getName << endl;
        cout << "Theyear of my ship is: " << &Ship::getYear << endl;
        cout << "the total capacity that the CArgoShip can carry: " << capacity << endl;

    }

};
