#include "MilTime.h"
#include <iostream>
using std::cin;
using std::cout;

#include <sstream>
using std::stringstream;

#include <cstdlib>

// If the values passed to this function are valid, the arguments are stored in the milHours and milSeconds variables.
void MilTime::setTime(const int mHrs, const int mSec)
{
    if (isMilTime(mHrs, mSec) == true)
    {
        milHours = mHrs;
        milSeconds = mSec;

        convertMilTime();
    }
    else
    {
        cout << "Input Error:\n";
        cout << mHrs << ':' << mSec << " is no military time!\n";
        cout << "This program will now exit.\n";
        exit(0);
    }
}

// Evaluates the attributes to check whether it is a valid military time. The result of this evaluation is returned.
bool MilTime::isMilTime(const int mHrs, const int mSec)
{
    bool isValidMilTime = true;

    if (mHrs < 0 || mHrs > 2359 || mHrs % 100 >= 60)
    {
        isValidMilTime = false;
    }
    else if (mSec < 0 || mSec > 59)
    {
        isValidMilTime = false;
    }

    return isValidMilTime;
}

//This function converts a military time to standard time, and stored in the hour, min and sec variables of the Time class.
void MilTime::convertMilTime()
{
    if (milHours > 1259)
    {
        hour = (milHours - 1200) / 100;
    }
    else if (milHours <= 59)
    {
        hour = 12;
    }
    else
    {
        hour = (milHours / 100);
    }

    min = milHours % 100;
    sec = milSeconds;
}

// This function formats and returns the hour in military format.
string MilTime::getHour() const
{
    stringstream ss;
    ss.str("");
    ss.clear(stringstream::goodbit);

    milHours < 10 ? ss << "000" << milHours << ':' :
        milHours < 100 ? ss << "00" << milHours << ':' :
        milHours < 1000 ? ss << '0' << milHours << ':' : ss << milHours << ':';

    milSeconds < 10 ? ss << '0' << milSeconds << "Z Hours" : ss << milSeconds << "Z Hours";

    return ss.str();
}

// This function formats and returns the hour in standar format.


string MilTime::getStandHr() const
{
    stringstream ss;
    ss.str("");
    ss.clear(stringstream::goodbit);

    hour < 10 ? ss << '0' << hour << ':' : ss << hour << ':';
    min < 10 ? ss << '0' << min << ':' : ss << min << ':';
    sec < 10 ? ss << '0' << sec : ss << sec;

    milHours >= 1200 ? ss << " P.M." : ss << " A.M";

    return ss.str();
}