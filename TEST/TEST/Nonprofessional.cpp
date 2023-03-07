#include "Nonprofessional.h"

using namespace std;

Nonprofessional::Nonprofessional(const string& name, int age, double hourlyRate, double hoursWorked)
    : Employee(name, age, hourlyRate* hoursWorked), m_hourlyRate(hourlyRate), m_hoursWorked(hoursWorked)
{
}

double Nonprofessional::calculateWeeklySalary() const
{
    return m_hourlyRate * m_hoursWorked; // hours worked/assuming a 4 week month
}

double Nonprofessional::calculateHealthCareContributions() const
{
    return 0.04 * m_salary; // hourly workers being below salary workers will get slightly less towards health care
}

int Nonprofessional::calculateVacationDaysEarned() const
{
    return m_hoursWorked / 40; // for hourly workers your days off are dependent on how many hours you work 
}