#include "input121.h"
#include <iostream>
#include <iomanip>
#include <array>
#include "TeamLeader.h"
#include "MilTime.h"
#include "Essay.h"
#include "CustomerData.h"
#include "Ship.h"
#include "CargoShip.h"
#include "CruiseShip.h"
#include "PreferredCustomer.h"

using namespace std;

int menuOption();
void Challenge3();
void Challenge4();
void Challenge6();
void Challenge7();
void Challenge8();
void Challenge12();

int main()
{
    do
    {
        switch (menuOption())
        {
        case 0: exit(1); break;
        case 3: Challenge3(); break;
        case 4: Challenge4(); break;
        case 6: Challenge6(); break;
        case 7: Challenge7(); break;
        case 8: Challenge8(); break;
        case 12: Challenge12(); break; //10 pts Exta
        default: cout << "\t\tERROR - Invalid option. Please re-enter."; break;
        }
        cout << "\n";
        system("pause");

    } while (true);

    return EXIT_SUCCESS;
}

int menuOption()
{
    cout << "\n\t\tChapter 14: Assignments Miguel Basilio (4/2/2022)";
    cout << "\n\t" << string(60, char(205));
    cout << "\n\t3. Challenge 3";
    cout << "\n\t4. Challenge 4";
    cout << "\n\t6. Challenge 6";
    cout << "\n\t7. Challenge 7";
    cout << "\n\t8. Challenge 8";
    cout << "\n\t12. Challenge 12";
    cout << "\n\t" << string(60, char(196));
    cout << "\n\t\t0. Exit";
    cout << "\n\t" << string(60, char(205)) << '\n';
    return (inputInteger("\t\tOption: ", 0, 12));
}

void Challenge3() {
    // Create a TeamLeader object
    TeamLeader leader("Miguel Basilio", 92358, "05/07/2014", 1, 39.70, 19.50);

    // Create an array of three ProductionWorker objects. Each employee is
    // part of this team leader's team.
    array <ProductionWorker, 3> worker
    {
        ProductionWorker("Lorena Herera", 23727, "05/07/2002", 1, 14.70),
        ProductionWorker("Lois Fonsi", 54838, "03/03/2020", 1, 29.50),
        ProductionWorker("Mauricio Dolores", 54257, "05/04/2002", 1, 17.50)
    };
    cout << "TEAM LEADER\n\n";
    leader.setAttTrainingHours(35);
    cout << leader;

    cout << "\n\nPRODUCTION TEAM\n\n";
    for (auto workerTeam : worker)
    {
        cout << workerTeam << "\n";
    }
    cin.get();
    cin.ignore();

}

void Challenge4() {
    int mHrs = 0;
    int mSecs = 0;

    cout << "MILITARY TIME CONVERTER\n\n";
    cout << "This program lets you convert Military to 'Standard' time." << endl;


    // Create a MilTime object and pass a military time to the constructor
    cout << "\tTest:\n";
    MilTime milTime(045, 7);

    cout << "MILITARY TIME\n";
    cout << milTime.getHour() << "\n\n";

    cout << "STANDARD TIME\n";
    cout << milTime.getStandHr() << "\n\n";

    // Create another MilTime object
    MilTime milTimeOne;

    // Ask the user to enter a military time
    cout << "Please enter a military time\n";
    cout << "Hour:   ";
    cin >> mHrs;
    cout << "Second: ";
    cin >> mSecs;
    cout << "\n";

    // Pass the values to the setTime() function of the MilTime class
    milTimeOne.setTime(mHrs, mSecs);

    cout << "MILITARY TIME\n";
    cout << milTimeOne.getHour() << "\n\n";

    cout << "STANDARD TIME\n";
    cout << milTimeOne.getStandHr() << "\n\n";

    cin.get();
    cin.ignore();
}

void getScores(int&, int&, int&, int&);
void displayGrade(const Essay&);
void Challenge6() {
    int gr = 0;
    int sp = 0;
    int len = 0;
    int cont = 0;

    cout << "ESSAY GRADER\n\n";

    // Get the scores
    getScores(gr, sp, len, cont);

    // Create an Essay score object
    Essay essay(gr, sp, len, cont);
    essay.addScore();

    displayGrade(essay);

    cin.get();
    cin.ignore();
}
// asks the teacher to input scores for the four categories that make up an essay's total score. The input is validated.
void getScores(int& gr, int& sp, int& len, int& cont)
{
    cout << "Enter the score for the following items:\n\n";
    cout << "Grammar (Max " << GRAMMAR << " points): ";
    cin >> gr;

    while (gr < 0 || gr > GRAMMAR)
    {
        cout << "Grammar: ";
        cin >> gr;
    }

    cout << "Spelling (Max " << SPELLING << " points): ";
    cin >> sp;

    while (sp < 0 || sp > SPELLING)
    {
        cout << "Spelling: ";
        cin >> sp;
    }

    cout << "Correct Length (Max " << SPELLING << " points): ";
    cin >> len;

    while (len < 0 || len > CORRECT_LENGTH)
    {
        cout << "Correct Length: ";
        cin >> len;
    }

    cout << "Content: (Max " << CONTENT << " points): ";
    cin >> cont;

    while (cont < 0 || cont > CONTENT)
    {
        cout << "Content: ";
        cin >> cont;
    }
}
//displays the scores achieved in each category, the total points and the letter grade.
void displayGrade(const Essay& essay)
{
    cout << "\n\nESSAY GRADER - SUMMARY\n\n";
  
    cout << "\n\t" << string(60, char(205)) << '\n';
    cout << "GRAMMAR" << setw(14) << "SPELLING" << setw(12)
        << "LENGTH" << setw(14) << "CONTENT\n";
    cout << setw(7) << right << essay.getGrammarScore()
        << setw(14) << right << essay.getSpellingscore()
        << setw(12) << right << essay.getCorrectLengthScore()
        << setw(13) << right << essay.getContentScore() << "\n\n";

    cout << "Total  Score: " << essay.getScore() << "/100\n";
    cout << "Letter Grade: " << essay.getLetterGrade();
    cout << "\n\t" << string(60, char(205)) << '\n';
}


void printCustData(const array<CustomerData, 3>& pData);

void Challenge7() {
    // Create an array of 3 CustomerData objects
    array<CustomerData, 3> pData{ CustomerData("Del Rio", "Monica", "1210 Santa Ana Blvd",
                                                              "Santa Ana", "CA", "90631", "714-592-8936", 15, false),
                                             CustomerData("Wang", "Kai", "1201 E Imperial",
                                                              "Placentia", "CA", "90001", "626-259-2356", 632, true),
                                             CustomerData("Bautista", "Mario", "2800 W Ball Rd",
                                                              "Anaheim", "CA", "92604", "714-532-2314", 947, true) };

    cout << "CUSTOMER DATABASE\n\n";

    printCustData(pData);
    cin.get();
    cin.ignore();
}
// accepts an array of CustomerData objects. It outputs the customer information to screen.
void printCustData(const array<CustomerData, 3>& pData)
{
    for (auto cData : pData)
    {
        cout << "Customer ID:     " << cData.getCustomerNumber() << "\n"
            << "On Mailing List: ";

        cData.getMailingList() == true ? cout << "Yes\n\n" : cout << "No\n\n";


        cout << "Last Name:      " << cData.getLastName() << "\n"
            << "First Name:      " << cData.getFirstName() << "\n"
            << "Address:         " << cData.getAddress() << "\n"
            << "City:            " << cData.getCity() << "\n"
            << "State:           " << cData.getState() << "\n"
            << "ZIP:             " << cData.getZip() << "\n"
            << "Phone Number:    " << cData.getPhone() << "\n";
        cout << "\n\t" << string(60, char(205)) << '\n';
    }
}



void printCustData(const array<PreferredCustomer, 4>& pData);
void Challenge8() {

    // Create an array of 3 CustomerData objects
    array<PreferredCustomer, 4> pData
    {
        PreferredCustomer("Del Rio", "Monica", "1210 Santa Ana Blvd",
                                                              "Santa Ana", "CA", "90631", "714-592-8936", 15, false, 190.0),
        PreferredCustomer("Wang", "Kai", "1201 E Imperial",
                                                              "Placentia", "CA", "90001", "626-259-2356", 632, true, 587.70),
        PreferredCustomer("Bautista", "Mario", "2800 W Ball Rd",
                                                              "Anaheim", "CA", "92604", "714-532-2314", 947, true, 1489.90),
        PreferredCustomer("Basilo", "Miguel", "1200 Rodeo Dr", "Beverly Hills", "CA", "90210", "323-562-4586", 56, true, 200.00)
    };

    cout << "CUSTOMER DATABASE\n\n";

    printCustData(pData);
    cin.get();
    cin.ignore();

}
void printCustData(const array<PreferredCustomer, 4>& pData)
{
    for (auto cData : pData)
    {
        cout << "Customer ID:     " << cData.getCustomerNumber() << "\n"
            << "On Mailing List: ";

        cData.getMailingList() == true ? cout << "Yes\n\n" : cout << "No\n\n";

        cout << "Last Name:       " << cData.getLastName() << "\n"
            << "First Name:      " << cData.getFirstName() << "\n"
            << "Address:         " << cData.getAddress() << "\n"
            << "City:            " << cData.getCity() << "\n"
            << "State:           " << cData.getState() << "\n"
            << "ZIP:             " << cData.getZip() << "\n"
            << "Phone Number:    " << cData.getPhone() << "\n\n";

        cout << fixed << setprecision(2);
        cout << "Purchase History:  " << setw(7) << cData.getPurchaseAmount() << " USD\n";
        cout << "Customer Discount: ";

        if (cData.getDiscountLevel() > 0)
        {
            cout << setw(7) << cData.getDiscountLevel() << " %\n";
        }
        else
        {
            cout << "Not a preferred customer\n";
        }
        cout << "\n---------------------------------------------" << "\n\n";
    }
}



void Challenge12() {

    Ship ship1;

    ship1.setName("Canoe");
    ship1.setYear(2008);
    ship1.print();


    CruiseShip cruiship1;

    cruiship1.setName("Titanic");
    cruiship1.setYear(1909);
    cruiship1.setPassenger(3320);
    cruiship1.print();


    CargoShip cargoship1;

    cargoship1.setName("Valez");
    cargoship1.setYear(1985);
    cargoship1.setCapacity(235000);
    cargoship1.print();


    Ship* ships[3] = {new Ship, new CruiseShip, new CargoShip};

            ships[0]->setName(ship1.getName());
            ships[0]->setYear(ship1.getYear());

           dynamic_cast<CruiseShip*>(ships[1])->setName(cruiship1.getName());
           dynamic_cast<CruiseShip*>(ships[1])->setYear(cruiship1.getYear());
           dynamic_cast<CruiseShip*>(ships[1])->setPassenger(cruiship1.getPassengers());

           dynamic_cast<CargoShip*> (ships[2])->setName(cargoship1.getName());
           dynamic_cast<CargoShip*> (ships[2])->setYear(cargoship1.getYear());
           dynamic_cast<CargoShip*> (ships[2])->setCapacity(cargoship1.getCapacity());

            for (int i = 0; i < 3; i++)
            {
                ships[i]->print();
            }

            delete ships[0];
            delete ships[1];
            delete ships[2];
}