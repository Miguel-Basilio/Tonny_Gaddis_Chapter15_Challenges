#pragma once
#include <string>
#include <iostream>
#include <string>
using std::string;

class PersonData
{
private:
    string lastName;
    string firstName;
    string address;
    string city;
    string state;
    string zip;
    string phone;

public:
    // Constructor
    PersonData()
    {
        lastName = " ";
        firstName = " ";
        address = " ";
        city = " ";
        state = " ";
        zip = " ";
        phone = " ";
    }

    // Parameterized constructor
    PersonData(string lName, string fName, string addr,
        string cty, string st, string z, string telNum)
    {
        set(lName, fName, addr, cty, st, z, telNum);
    }

    // Mutator function
    // Sets the attribute data
    virtual void set(string lName, string fName, string addr, string cty,
        string st, string z, string telNum)
    {
        lastName = lName;
        firstName = fName;
        address = addr;
        city = cty;
        state = st;
        zip = z;
        phone = telNum;
    }

    // Accessor functions
    string getLastName() const
    {
        return lastName;
    }

    string getFirstName() const
    {
        return firstName;
    }

    string getAddress() const
    {
        return address;
    }

    string getCity() const
    {
        return city;
    }

    string getState() const
    {
        return state;
    }

    string getZip() const
    {
        return zip;
    }

    string getPhone() const
    {
        return phone;
    }
};