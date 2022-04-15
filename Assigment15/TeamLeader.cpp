#include "TeamLeader.h"
#include <iomanip>
using std::setw;

#include <iostream>
using std::left;
using std::right;

// This function determines, how many hours of traning are left to take for a team leader, in order to fulfill the
  // mandatory training requirements.
int TeamLeader::getRemainingTrainingHours() const
{
    int remainingHours = 0;

    return remainingHours = (REQ_TRAINING_HOURS - attTrainingHours);
}

// TeamLeader::print() : ostream & (overridden)
void TeamLeader::print(ostream& strm) const
{
    ProductionWorker::print(strm);

    strm << left << setw(14) << "Bonus: "
        << right << "$ " << monthlyBonus << "\n\n"
        << "ANNUAL TRAINING REQUIREMENTS\n\n"
        << "Required:  " << REQ_TRAINING_HOURS << " hrs.\n"
        << "Attended:  " << attTrainingHours << " hrs.\n"
        << "Remaining: " << getRemainingTrainingHours() << " hrs.\n";
}