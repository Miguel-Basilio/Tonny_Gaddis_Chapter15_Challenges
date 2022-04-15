#pragma once
#include "Time.h"

#include "string"
using std::string;

// MilTime class derived from the Time class
class MilTime : public Time
{
protected:
    int milHours;            // Military hours (0 - 2359)
    int milSeconds;        // Military seconds (0 - 59)

public:
    // Default Constructor
    MilTime() : Time()
    {
        milHours = 0;
        milSeconds = 0;
    }

    // Parameterized Constructor
    MilTime(int mHrs, int mSec) : Time(0, 0, 0)
    {
        setTime(mHrs, mSec);
    }

    // Mutator functions
    bool isMilTime(const int, const int);
    void setTime(const int, const int);
    void convertMilTime();

    // Accessor functions
    string getHour() const;
    string getStandHr() const;
};

