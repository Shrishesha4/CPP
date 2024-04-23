#include <iomanip> 
#include <iostream>
#include <string>

using namespace std;

class Employee {
    public:
        Employee() : name(""), year(0), salary(0.0), address("") {}

        Employee(const string& name, int year, double salary, const string& address) :
            name(name), year(year), salary(salary), address(address) {}

        void getDetails() {
            cout << "Enter name: ";
            getline(cin, name);

            cout << "Enter year of joining: ";
            cin >> year;
            cin.ignore();

            cout << "Enter salary: ";
            cin >> salary;
            cin.ignore();

            cout << "Enter address: ";
            getline(cin, address);
        }   

        void printInfo() const {
            cout << left << name.substr(0, 8);
            for (int i = name.size(); i < 8; ++i) {
            cout << " ";
            }
            cout << left << setw(3) << year << "   ";

            int intSalary = static_cast<int>(salary);
            double decimal = salary - intSalary;
            cout << right << intSalary << ".";
            cout << fixed << showpoint << setfill('0') << setw(2) << (int)(decimal * 100);

            cout << "  " << address << endl;
        }   

    private:
        string name;
        int year;
        double salary;
        string address;
};

int main() {
    Employee empList[3];

    cout << "Enter details for 3 employees:\n";

    for (int i = 0; i < 3; i++) {
        cout << "\nEmployee " << (i + 1) << ":" << endl;
        empList[i].getDetails();
    }

    cout << "\nEmployee Details:\n";
    cout << "Name  Year of joining  Salary      Address" << endl;

    for (int i = 0; i < 3; i++) {
        empList[i].printInfo();
    }

    return 0;
}
