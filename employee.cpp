#include <iostream>
#include "Employee.h"
#include "Date.h"
#include <string>

using namespace std;

// constructor uses a member initializer list to pass initializer values to constructors of member objects
Employee::Employee(const string& fname, const string& lname, const Date& dateOfBirth, const Date& dateOfHire)
    : firstName(fname),
    lastName(lname),
    birthDate(dateOfBirth),
    hireDate(dateOfHire)
{
    // Output Employee object to show when the constructor is called
    cout << "Employee object constructor: " << firstName << ' ' << lastName << endl;
}

Employee::~Employee()
{
    cout << "Employee object destructor: " << lastName << ", " << firstName << endl;
}

void Employee::print() const
{
    cout << lastName << ", " << firstName << " Hired: ";
    hireDate.print();
    cout << " Birthday: ";
    birthDate.print();
    cout << endl;
}
