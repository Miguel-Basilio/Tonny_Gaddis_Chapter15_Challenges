#pragma once
class GradedActivity
{
protected:
    double score;                // To hold the numeric score

public:
    // Default constructor
    GradedActivity()
    {
        score = 0.0;
    }

    // Constructor
    GradedActivity(double s)
    {
        score = s;
    }

    // Mutator function
    void setScore(double s)
    {
        score = s;
    }

    // Accessor function
    double getScore() const
    {
        return score;
    }

    char getLetterGrade() const;
};

