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

// Forward declaration
class Group;

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
    const Group& getGroup() const;
    void setName(const string& iName);
    void setPhoneNumber(const string& iPhoneNumber);
    void setExpenses(const float iExpenses);
    void setPayback(const float iPayback);
    void setGroup(Group* iGroup);
    //@}

private:
    string _name;
    string _phoneNumber;
    float _expenses;
    float _payback;
    Group* _group;
};

#endif /* PERSON_HPP_ */
