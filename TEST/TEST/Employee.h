#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee {
public:
    // constuctor for name age and salary of given EMployee
    Employee(const string& name, int age, double salary);
   // deconstructor
    virtual ~Employee() {}
    // member functions that calculate weekly salary, healthcare payout
    // and vacation days earned
    virtual double calculateWeeklySalary() const = 0;
    virtual double calculateHealthCareContributions() const = 0;
    virtual int calculateVacationDaysEarned() const = 0;

    string getName() const;
    int getAge() const;
    double getSalary() const;

protected:
    string m_name;
    int m_age;
    double m_salary;
};

#endif
