#pragma once
#include <string>
using std::string;

#include <iostream>
using std::ostream;

class Employee
{
private:
    string empName;                // Employee name
    int     empID;                      // Employee ID-number
    string empHireDate;           // Employee hire date

public:
    // Default constructor
    Employee()
    {
        empName = " ";
        empID = 0;
        empHireDate = " ";
    }

    // Parameterized constructor
    Employee(string name, int number, string hireDate)
    {
        empName = name;
        empID = number;
        empHireDate = hireDate;
    }

    // Mutator functions
    void setEmpName(string name)
    {
        empName = name;
    }

    void setEmpID(int number)
    {
        empID = number;
    }

    void setEmpHireDate(string hireDate)
    {
        empHireDate = hireDate;
    }

    // Accessor functions
    string getEmpName() const
    {
        return empName;
    }

    int getEmpID() const
    {
        return empID;
    }

    string getEmpDateHired() const
    {
        return empHireDate;
    }

    // Friend function
    friend ostream& operator << (ostream&, const Employee&);

    // Virtual function defined in Employee.cpp
    virtual void print(ostream& strm) const;
};
