#include "Employee.h"

using namespace std;

Employee::Employee(const string& name, int age, double salary)
    : m_name(name), m_age(age), m_salary(salary)
{
}

std::string Employee::getName() const
{
    // will return the name of the Employee
    return m_name;
}

int Employee::getAge() const
{
    // will return the age of the Employee
    return m_age;
}

double Employee::getSalary() const
{
    // will return the salary of the Employee
    return m_salary;
}

