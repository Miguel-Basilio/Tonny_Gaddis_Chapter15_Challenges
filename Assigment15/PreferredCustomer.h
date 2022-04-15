#pragma once
#include "CustomerData.h"

// PreferredCustomer class derived from the CustomerData class
class PreferredCustomer : public CustomerData
{
private:
    double purchaseAmount;       
    double discountLevel;        

public:
    PreferredCustomer() : CustomerData()
    {
        purchaseAmount = 0.0;
        discountLevel = 0.0;
    }

    PreferredCustomer(string lName, string fName, string addr, string cty,
        string st, string zipNum, string telNum, int custID,
        bool onList, double pAmnt) :
        CustomerData(lName, fName, addr, cty, st, zipNum, telNum, custID, onList)
    {
        discountLevel = 0.0;

        setPurchaseAmount(pAmnt);
        setDiscountLevel();
    }

    // Mutator functions
    void setPurchaseAmount(double);       
    void setDiscountLevel();              

    // Accessor functions
    double getPurchaseAmount() const
    {
        return purchaseAmount;
    }

    double getDiscountLevel() const
    {
        return discountLevel * 100.0;
    }
};
