#include "Essay.h"
// assigns the scores achieved by a student to the appropriate member variables.
void Essay::set(int gr, int sp, int len, int cont)
{
    grammar = gr;
    spelling = sp;
    length = len;
    content = cont;
}

//Calculates the total score achieved, then calls the inherited setScore() function to set the numeric score.
void Essay::addScore()
{
    essayScore = grammar + spelling + length + content;

    setScore(essayScore);
}