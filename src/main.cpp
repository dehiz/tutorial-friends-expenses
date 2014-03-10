//============================================================================
// Name        : main.cpp
// Author      : aabou
// Version     :
// Copyright   : Your copyright notice
// Description : Tutorial - Application to manage friends expenses
//============================================================================

#include "Person.hpp"
#include "Group.hpp"

#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    unsigned int aNb = 0;

    /*
     *  Register the input
     */
    cout << "How many people are you?" << endl;
    cin >> aNb;

    Group aGroup;

    for (unsigned int i=0; i < aNb; i++) {
        Person aPerson;

        cout << "What is the name of person " << i+1 << " ?" << endl;
        cin >> aPerson._name;

        cout << "What is the phone number of person " << i+1 << " ?" << endl;
        cin >> aPerson._phoneNumber;

        cout << "What is the expenses of person " << i+1 << " ?" << endl;
        cin >> aPerson._expenses;

        aGroup.push_back(aPerson);
    }

    /*
     *  Prepare the output
     */
    cout << endl;
    cout << "Total expenses:\t\t" << aGroup.totalExpenses() << endl;
    float aExpensesPerPerson = aGroup.expensesPerPerson();
    cout << "Expenses per person:\t" << aExpensesPerPerson << endl;
    cout << endl;

    cout << "Name\t\t" << "Phone Number\t" << "Expenses\t"
        << "Payback" << endl;
    cout << "------------------------------------------------------------"
        << endl;

    for (size_t i=0; i < aGroup.size(); ++i) {
        // operate the payback first
        aGroup[i].operatePayback(aExpensesPerPerson);
        // display the values
        cout << aGroup[i]._name << "\t\t" << aGroup[i]._phoneNumber
            << "\t\t" << aGroup[i]._expenses << "\t\t"
            << aGroup[i]._payback << endl;
    }
    cout << endl;

    return 0;
}
