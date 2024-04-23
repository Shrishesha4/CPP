#include <iostream>
#include <string>
using namespace std;

class Employee {
    public:
        Employee() : empId(0), empName(""), salary(0.0), workHours(0.0) {}
        Employee(int empId, const string& empName, double salary, double workHours) :
            empId(empId), empName(empName), salary(salary), workHours(workHours) {}
        void getInfo() {
            cout << "Enter employee ID: ";
            cin >> empId;
            cin.ignore();
            cout << "Enter employee name: ";
            getline(cin, empName);
            cout << "Enter salary: ";
            cin >> salary;
            cin.ignore();
            cout << "Enter number of work hours per day: ";
            cin >> workHours;
            cin.ignore();
        }
        void addSal() {
            if (salary < 500) {
            salary += 10000;
            }
        }
        void addWork() {
            if (workHours > 6) {
            salary += 5000;
            }
        }
        void printInfo() const {
            cout << "Employee ID: " << empId << endl;
            cout << "Employee Name: " << empName << endl;
            cout << "Salary: " << salary << endl;
            cout << "Work Hours per Day: " << workHours << endl;
        }
    private:
        int empId;
        string empName;
        double salary;
        double workHours;
};
int main() {
  Employee emp;
  emp.getInfo();
  emp.addSal();
  emp.addWork();
  cout << "\nEmployee Details:\n";
  emp.printInfo();
  return 0;
}
