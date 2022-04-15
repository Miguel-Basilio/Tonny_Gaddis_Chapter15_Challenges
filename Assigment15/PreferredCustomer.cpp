#include "PreferredCustomer.h"
#include <cstdlib>

#include <iostream>
using std::cout;

// Customer Discount Levels
enum DiscountLevels { LVL_ONE = 500, LVL_TWO = 1000, LVL_THREE = 1500, LVL_FOUR = 2000 };


    //Sets the purchaseAmount attribute data:
void PreferredCustomer::setPurchaseAmount(double pAmnt)
{
    if (pAmnt <= 0)
    {
        cout << "Input Error: " << pAmnt
            << " is an invalid purchase amount!\n"
            << "This program will now exit ...\n\n";
        exit(1);
    }
    else
    {
        purchaseAmount = pAmnt;
    }
}

    //Determines the amount of discount in %
void PreferredCustomer::setDiscountLevel()
{
    if (purchaseAmount < LVL_ONE)
    {
        discountLevel = 0.0;
    }
    else if (purchaseAmount < LVL_TWO)
    {
        discountLevel = 0.05;
    }
    else if (purchaseAmount < LVL_THREE)
    {
        discountLevel = 0.06;
    }
    else if (purchaseAmount < LVL_FOUR)
    {
        discountLevel = 0.07;
    }
    else
    {
        discountLevel = 0.1;
    }
}
