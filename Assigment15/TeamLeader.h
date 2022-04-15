#pragma once
#include "ProductionWorker.h"

// TeamLeader class derived from the ProductionWorker class
class TeamLeader : public ProductionWorker
{
private:
    double monthlyBonus;                    // Monthly salary bonus
    int    attTrainingHours;                    // Attented training hours

public:
    const int REQ_TRAINING_HOURS = 75;        // Required hours of traning p.A.

    // Constructor
    TeamLeader() : ProductionWorker()
    {
        monthlyBonus = 0.0;
        attTrainingHours = 0;
    }

    // Parameterized constructor
    TeamLeader(string name, int number, string hireDate, int shift, double payRate,
        double bonus) :
        ProductionWorker(name, number, hireDate, shift, payRate)
    {
        monthlyBonus = bonus;
        attTrainingHours = 0;
    }

    // Mutator functions
    void setMonthlyBonus(double bonus)
    {
        monthlyBonus = bonus;
    }

    void setAttTrainingHours(int attHours)
    {
        attTrainingHours = attHours;
    }

    // Accessor functions
    double getMonthlyBonus() const
    {
        return monthlyBonus;
    }

    int getAttendedTrainingHours() const
    {
        return attTrainingHours;
    }

    int getRemainingTrainingHours() const;

    // Overridden print function
    void print(ostream&) const;
};