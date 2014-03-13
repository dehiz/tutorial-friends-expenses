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

class Person {
public:
    //! Constructor and destructor
    //@{
    Person();
    virtual ~Person();
    //@}

    //! Methods
    //@{
    void operatePayback(const float iExpensesPerPerson);
    //@}

    //! Getters and setters
    //@{
    const string& getName() const;
    const string& getPhoneNumber() const;
    float getExpenses() const;
    float getPayback() const;
    void setName(const string& iName);
    void setPhoneNumber(const string& iPhoneNumber);
    void setExpenses(const float iExpenses);
    void setPayback(const float iPayback);
    //@}

private:
    string _name;
    string _phoneNumber;
    float _expenses;
    float _payback;
};

#endif /* PERSON_HPP_ */
