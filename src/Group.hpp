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

struct Group : public vector<Person> {
    Group();
    virtual ~Group();

    float totalExpenses() const;
    float expensesPerPerson() const;
};

#endif /* GROUP_HPP_ */
