#pragma once
class Time
{
protected:
    int hour;
    int min;
    int sec;

public:
    // Default constructor
    Time()
    {
        hour = 0;
        min = 0;
        sec = 0;
    }

    // Constructor
    Time(int h, int m, int s)
    {
        hour = h;
        min = m;
        sec = s;
    }

    // Accessor functions
    int getHour() const
    {
        return hour;
    }

    int getMinute() const
    {
        return min;
    }

    int getSecond() const
    {
        return sec;
    }
};

