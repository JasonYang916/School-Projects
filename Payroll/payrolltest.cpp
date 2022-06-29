// CISC 2000  Fordham University  Spring 2020
// Instructor: Vincent Mierlak
//
// Lab 11.  Implement a PayrollManager class.
// The PayrollManager class takes advantage of polymorphism to generate
// a payroll report for different types of employees.
//

#include <iostream>
#include "payrollmanager.h"

using std::cout;
using std::endl;

int main()
{
    PayrollManager nycdiv;

    nycdiv.add(new HourlyEmployee("Adam Driven", "444559999", 21.50, 160));
    nycdiv.add(new HourlyEmployee("Minnie Castile", "555993322", 23.25, 150));
    nycdiv.add(new HourlyEmployee("Brad Pittman", "666111222", 31.70, 135));
    nycdiv.add(new HourlyEmployee("Minnie Castile", "555993322", 28, 141));
    nycdiv.add(new Manager("Estelle Parsnip", "434558833", 7600));

    cout.setf(std::ios::fixed);
    cout.setf(std::ios::showpoint);
    cout.precision(2);
    cout << "NYC Division -- Payroll Test:" << endl;

    // One function call: generate the payroll report
    nycdiv.generate_payroll_report();

    return 0;
}