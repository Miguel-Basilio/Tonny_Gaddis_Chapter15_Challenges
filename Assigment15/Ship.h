#pragma once
#include <iostream>

using namespace std;


class Ship {
private:
    string name;
    int year;
public:
    Ship()
    {
        name = "unknown";
        year = 0;
    }

    void setName(string n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }
    void setYear(int y)
    {
        year = y;
    }
    int getYear()
    {
        return year;
    }
    virtual void print()
    {
        cout << "May ship name is: " << name << endl;
        cout << "Theyear of my ship is: " << year << endl;
    }
};

