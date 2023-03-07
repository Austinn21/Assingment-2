#ifndef PROFESSIONAL_H
#define PROFESSIONAL_H

#include "Employee.h"

using namespace std;

class Professional : public Employee {
public:
    // constructer that takes name age and salary and for a salary Employee the vacation days given
    Professional(const string& name, int age, double salary, int vacationDays);
   // deconstrucor
    ~Professional() {}

    double calculateWeeklySalary() const override;
    double calculateHealthCareContributions() const override;
    int calculateVacationDaysEarned() const override;

private:
    int m_vacationDays;
};

#endif
