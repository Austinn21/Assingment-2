#include "Professional.h"

using namespace std;

Professional::Professional(const string& name, int age, double salary, int vacationDays)
    : Employee(name, age, salary), m_vacationDays(vacationDays)
    // constructor that initializes the base class,vacation days 
{
}

double Professional::calculateWeeklySalary() const
{
    return m_salary / 4.0; // monthly salary divided by 4 assuming the month has 4 weeks
}

double Professional::calculateHealthCareContributions() const
{
    return 0.10 * m_salary; // depends on the company but for this 10%  of paycheck will contribution to healthcare 
}

int Professional::calculateVacationDaysEarned() const
{
    return m_vacationDays; // Since salary workers normaly have a set amount of days off this is a stagnent number
}
