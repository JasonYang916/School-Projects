//CISC 2010 - L01
//Jason Yang
//April 23, 2020
//Lab 11

#ifndef _PAYROLL_MANAGER_H
#define _PAYROLL_MANAGER_H

#include <iostream>
#include <vector>
#include "employee.h"
#include "hourlyemployee.h"
#include "manager.h"

class PayrollManager
{
    public:
        PayrollManager() { }
        ~PayrollManager();
        
        void generate_payroll_report();
        void add(Employee *new_emp);
        
    private:
        std::vector<Employee*> staff;
};

#endif //_PAYROLL_MANAGER_H