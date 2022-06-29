//CISC 2010 - L01
//Jason Yang
//April 23, 2020
//Lab 11

#include "payrollmanager.h"

PayrollManager::~PayrollManager()
{
    for(Employee* ptr : staff)
        delete ptr;
}

void PayrollManager::generate_payroll_report()
{
    for(Employee* ptr : staff)
    {
      std::cout <<*ptr;
      std::cout << " Total pay: " << ptr->get_total_pay() << std::endl;
    }
}

void PayrollManager::add(Employee *new_emp)
{
    staff.push_back(new_emp);
}