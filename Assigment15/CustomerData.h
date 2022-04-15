#pragma once
#include "PersonData.h"

// CustomerData class derived from PersonData class
class CustomerData : public PersonData
{
    private:
        int  customerNumber;
        bool mailingList;

    public:
        // Constructor
        CustomerData()
        {
            customerNumber = 0;
            mailingList = false;
        }

        // Parameterized Constructor
        CustomerData(string lName, string fName, string addr, string cty, string st, string zipNum, string telNum, int custID, bool onList) : PersonData(lName, fName, addr, cty, st, zipNum, telNum)
        {
            set(custID, onList);
        }

        // Mutator function
        // Sets the attribute data
        void set( int custID, bool onList)
        {
            customerNumber = custID;
            mailingList = onList;
        }

        // Accessor functions
        int getCustomerNumber() const
        { return customerNumber; }

        bool getMailingList() const
        { return mailingList; }
};