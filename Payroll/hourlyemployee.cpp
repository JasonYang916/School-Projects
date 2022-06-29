// CISC 2000   Fordham University  Fall 2019
// Instructor: Vincent Mierlak
// 
// This is the implementation for the class HourlyEmployee.

#include <string>
#include <iostream>
#include "hourlyemployee.h"

HourlyEmployee::HourlyEmployee() : Employee(), hourly_rate(0), hours(0)
{
    //deliberately empty
}

HourlyEmployee::HourlyEmployee(string e_name, string e_ssn,
        double e_hourly_rate, double e_hours)
    : Employee(e_name, e_ssn), hourly_rate(e_hourly_rate), hours(e_hours)
{
    //deliberately empty
}

void HourlyEmployee::set_hourly_rate(double new_hrly_rate)
{
    hourly_rate = new_hrly_rate;
}

double HourlyEmployee::get_hourly_rate() const
{
    return hourly_rate;
}

void HourlyEmployee::set_hours(double hours_worked)
{
    hours = hours_worked;
}

double HourlyEmployee::get_hours() const
{
    return hours;
}

double HourlyEmployee::get_total_pay() const
{
    return hourly_rate * hours;
}