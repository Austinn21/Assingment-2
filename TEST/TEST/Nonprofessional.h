#pragma once
#ifndef NONPROFESSIONAL_H
#define NONPROFESSIONAL_H

#include "Employee.h"

using namespace std;

class Nonprofessional : public Employee {
public:
    // constructor  that grabs name age wage and hours worked for the vacation
    Nonprofessional(const string& name, int age, double hourlyRate, double hoursWorked);
    // deconstructor
    ~Nonprofessional() {}

    double calculateWeeklySalary() const override;
    double calculateHealthCareContributions() const override;
    int calculateVacationDaysEarned() const override;

private:
    double m_hourlyRate;
    double m_hoursWorked;
};

#endif