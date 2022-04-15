#pragma once
#include "GradedActivity.h"

// Max amount of achievable points
const int GRAMMAR = 30;
const int SPELLING = 20;
const int CORRECT_LENGTH = 20;
const int CONTENT = 30;

// Essay class derived from the GradedActivity class
class Essay : public GradedActivity
{
private:
    double essayScore;            // The score a student has achieved
    int     grammar;                // Grammar score
    int    spelling;                // Spelling score
    int     length;                    // Correct length score
    int     content;                // Content score

public:
    // Constructor
    Essay() : GradedActivity()
    {
        essayScore = 0.0;
        grammar = 0;
        spelling = 0;
        length = 0;
        content = 0;
    }

    // Parameterized constructor
    Essay(int gr, int sp, int len, int cont) : GradedActivity()
    {
        set(gr, sp, len, cont);
    }

    // Mutator functions
    void set(int, int, int, int);
    void addScore();

    // Accessor functions
    int getGrammarScore() const
    {
        return grammar;
    }

    int getSpellingscore() const
    {
        return spelling;
    }

    int getCorrectLengthScore() const
    {
        return length;
    }

    int getContentScore() const
    {
        return content;
    }
};