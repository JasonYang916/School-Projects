// CISC 2000   Fordham University  Spring 2020
// Instructor: Vincent Mierlak
// 
// Header file employee.h.
// 
// This is the interface for the class Employee.
// This is primarily intended to be used as a base class from which we
// can derive classes for different kinds of employees.

#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include <string>
using std::string;
using std::ostream;

class Employee
{
    public:
        friend ostream& operator<<(ostream &outsr, const Employee &e);
        Employee();
        Employee(string the_name, string the_ssn);
        virtual ~Employee() { }

        string get_name() const;
        string get_ssn() const;
        
        // This virtual function will be overridden in derived classes
        virtual double get_total_pay() const;

        void set_name(string new_name);
        void set_ssn(string new_ssn);

    private:
        string name;
        string ssn;
};

#endif //EMPLOYEE_H