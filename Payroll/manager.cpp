// This is the implementation for the class Manager.

#include <string>
#include <iostream>
#include "manager.h"
using std::string;

Manager::Manager(string e_name, string e_ssn, 
        double e_sal) : Employee(e_name, e_ssn)
{
    salary = e_sal;
}

double Manager::get_total_pay() const
{
    return salary;
}

double Manager::get_salary() const
{
    return salary;
}

void Manager::set_salary(double new_salary)
{
    salary = new_salary;
}