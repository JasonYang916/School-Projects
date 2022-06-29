// CISC 2000   Fordham University  Spring 2020
// Instructor: Vincent Mierlak
// 
// Header file manager.h.
// This is the interface for the class Manager.
// Managers receive a monthly salary.

#ifndef _MANAGER_H_
#define _MANAGER_H_

#include <string>
#include "employee.h"
using std::string;

class Manager : public Employee
{
    public:
        Manager() : Employee() { }
        Manager(string e_name, string e_ssn, double e_sal);

        ~Manager() { }

        virtual double get_total_pay() const;

        double get_salary() const;
        void set_salary(double new_salary);

    private:
        double salary = 0.0;
};

#endif //_MANAGER_H_
