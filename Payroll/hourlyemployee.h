// CISC 2000   Fordham University  Spring 2020
// Instructor: Vincent Mierlak
// 
// Header file hourlyemployee.h.
// This is the interface for the class HourlyEmployee.
// HourlyEmployees get paid based on the number of hours worked
// times their hourly rate.

#ifndef _HOURLYEMPLOYEE_H_
#define _HOURLYEMPLOYEE_H_

#include <string>
#include "employee.h"

class HourlyEmployee : public Employee
{
    public:
        HourlyEmployee();
        HourlyEmployee(string e_name, string e_ssn,
                double e_hourly_rate, double e_hours);
        
        virtual ~HourlyEmployee() { }
        virtual double get_total_pay() const;

        void set_hourly_rate(double new_hrly_rate);
        double get_hourly_rate() const;
        void set_hours(double hours_worked);
        double get_hours() const;

    protected:
        double hourly_rate;
        double hours;
};

#endif //_HOURLYEMPLOYEE_H_
