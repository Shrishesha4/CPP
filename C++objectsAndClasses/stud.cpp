#include <iostream>
#include <string>
using namespace std;
class Student {
    public:
        Student() : name(""), rollNum(0), phoneNum(""), address("") {}
        Student(const string& name, int rollNum, const string& phoneNum, const string& address) :
                name(name), rollNum(rollNum), phoneNum(phoneNum), address(address) {}
        void setDetails() { 
            cout << "Enter name: ";
            getline(cin, name);
            cout << "Enter roll number: ";
            cin >> rollNum;
            cin.ignore();
            cout << "Enter phone number: ";
            getline(cin, phoneNum);
            cout << "Enter address: ";
            getline(cin, address);
        }
        void printInfo() const {
            cout << "Name: " << name << endl;
            cout << "Roll Number: " << rollNum << endl;
            cout << "Phone Number: " << phoneNum << endl;
            cout << "Address: " << address << endl;
        }
    private:
        string name;
        int rollNum;
        string phoneNum;
        string address;
};
int main() {
    Student student1, student2;
    cout << "Enter details for student 1:\n";
    student1.setDetails();
    cout << "\nEnter details for student 2:\n";
    student2.setDetails();
    cout << "\nStudent Details:\n";
    cout << "-----\n";
    student1.printInfo();
    cout << "-----\n";
    student2.printInfo();
    return 0;
}
