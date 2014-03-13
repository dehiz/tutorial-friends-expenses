/*
 * Group.hpp
 *
 *  Created on: Feb 18, 2014
 *      Author: aabou
 */

#ifndef GROUP_HPP_
#define GROUP_HPP_

#include "Person.hpp"

#include <vector>
#include <string>

using namespace std;

class Group : public vector<Person> {
public:
    //! Constructor and destructor
    //@{
    Group();
    virtual ~Group();
    //@}

    //! Methods
    //@{
    float totalExpenses() const;
    float expensesPerPerson() const;
    //@}

    //! Getter and setter
    //@{
    const string& getName() const;
    void setName(const string& iName);
    //@}

private:
    string _name;
};

#endif /* GROUP_HPP_ */
