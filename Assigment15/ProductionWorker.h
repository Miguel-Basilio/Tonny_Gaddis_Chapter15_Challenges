#pragma once
#include "Employee.h"
#include <iostream>
using std::ostream;

// ProductionWorker class derived from the Employee class
class ProductionWorker : public Employee
{
protected:
    int    shiftNumber;                // The shift number (1 = day, 2 = night)
    double hourlyPayRate;            // The hourly pay rate

public:
    // Default constructor
    ProductionWorker() : Employee()
    {
        shiftNumber = 0;
        hourlyPayRate = 0.0;
    }

    // Parameterized Constructor
    ProductionWorker(string name, int number, string hireDate, int shift, double payRate) :
        Employee(name, number, hireDate)
    {
        shiftNumber = shift;
        hourlyPayRate = payRate;
    }

    // Mutator functions
    void setShift(int shift)
    {
        shiftNumber = shift;
    }

    void setHourlyPayrate(double payRate)
    {
        hourlyPayRate = payRate;
    }

    // Accessor functions
    int getShift() const
    {
        return shiftNumber;
    }

    double getHourlyPayRate() const
    {
        return hourlyPayRate;
    }

    void print(ostream&) const;
};