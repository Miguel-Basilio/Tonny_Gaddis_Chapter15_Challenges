#include "Employee.h"
#include <iomanip>
using std::setw;

#include <iostream>
using std::left;
using std::right;

// Makes a call to the virtual print function, and sends the output to the stream.
ostream& operator << (ostream& strm, const Employee& obj)
{
    obj.print(strm);
    return strm;
}

// This function sends formatted employee data to the output stream.
void Employee::print(ostream& strm) const
{
    strm << left << setw(12) << "Employee Name: "
        << right << empName << "\n"
        << left << setw(12) << "Employee ID:   "
        << right << empID << "\n"
        << left << setw(15) << "Hire Date: "
        << right << empHireDate << "\n\n";
}