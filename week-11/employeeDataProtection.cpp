#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string employeeName;
    int employeeID;
    double basicSalary;

public:
    // Input employee details
    void setEmployeeDetails() {
        cout << "Enter Employee Name: ";
        getline(cin, employeeName);

        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    // Calculate net salary
    double calculateSalary() {
        return basicSalary + (0.10 * basicSalary);
    }

    // Display employee details
    void displayEmployeeDetails() {
        cout << "\n===== Employee Details =====" << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Net Salary: " << calculateSalary() << endl;
    }
};

int main() {

    Employee emp;

    emp.setEmployeeDetails();
    emp.displayEmployeeDetails();

    return 0;
}