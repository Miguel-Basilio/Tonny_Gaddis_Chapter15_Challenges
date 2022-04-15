#include "ProductionWorker.h"
#include <iomanip>
#include "Employee.h"
using std::setprecision;
using std::setw;

#include <iostream>
using std::left;
using std::right;
using std::fixed;

/* **********************************************************
            ProductionWorker::print() : ostream & (overridden)
   ********************************************************** */

void ProductionWorker::print(ostream& strm) const
{
    Employee::print(strm);

    strm << "Shift #" << shiftNumber << ": ";

    shiftNumber == 1 ? strm << setw(16) << right << " Day-Shift\n" :
        strm << setw(16) << right << " Night-Shift\n";

    strm << fixed << setprecision(2)
        << left << setw(14) << "Pay Rate: "
        << right << "$ " << hourlyPayRate << "\n";
}