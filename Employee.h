#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Date.h"

class Employee
{
public:
    Employee(const std::string &, const std::string &, const Date &, const Date &);
    void print() const;
    ~Employee(); // provided to confirm destruction order

private:
    std::string firstName;
    std::string lastName;
    const Date birthDate; // composition: member object
    const Date hireDate;  // composition: member object
};
#endif // EMPLOYEE_H
