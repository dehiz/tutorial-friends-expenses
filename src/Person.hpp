/*
 * Person.hpp
 *
 *  Created on: Feb 18, 2014
 *      Author: aabou
 */

#ifndef PERSON_HPP_
#define PERSON_HPP_

#include <string>

using namespace std;

struct Person {
    Person();
    virtual ~Person();
    void operatePayback(const float iExpensesPerPerson);

    string _name;
    string _phoneNumber;
    float _expenses;
    float _payback;
};

#endif /* PERSON_HPP_ */
