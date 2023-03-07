#include <iostream>
#include "Employee.h"
#include "Professional.h"
#include "Nonprofessional.h"

using namespace std;

int main()
{
    // create instances of Professional and Nonprofessional employees
    Professional profEmployee("Timmy Tenders", 30, 5000.0, 20);
    Nonprofessional nonProfEmployee("Ricky Bobby", 25, 25.0, 40.0);

    // print employee information
    cout << "Professional employee:" << endl;
    cout << "Name: " << profEmployee.getName() << endl;
    cout << "Age: " << profEmployee.getAge() << endl;
    cout << "Weekly salary: $" << profEmployee.calculateWeeklySalary() << endl;
    cout << "Health care contributions: $" << profEmployee.calculateHealthCareContributions() << endl;
    cout << "Vacation days earned: " << profEmployee.calculateVacationDaysEarned() << endl;

    cout << endl;

    cout << "Nonprofessional employee:" << endl;
    cout << "Name: " << nonProfEmployee.getName() << endl;
    cout << "Age: " << nonProfEmployee.getAge() << endl;
    cout << "Weekly salary: $" << nonProfEmployee.calculateWeeklySalary() << endl;
    cout << "Health care contributions: $" << nonProfEmployee.calculateHealthCareContributions() << endl;
    cout << "Vacation days earned: " << nonProfEmployee.calculateVacationDaysEarned() << endl;

    return 0;
}
