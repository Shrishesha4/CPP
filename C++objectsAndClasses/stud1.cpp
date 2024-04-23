#include <iostream>
#include <string>
using namespace std;
class Student {
    public:
        Student() : name(""), roll_no(0) {}
        Student(const string& name, int roll_no) : name(name), roll_no(roll_no) {}
        void printInfo() const {
            cout << "Name: " << name << endl;
            cout << "Roll Number: " << roll_no << endl;
        }
    private:
        string name;
        int roll_no;
};
int main() {
    Student student("John", 2);
    cout << "\nStudent Details:\n";
    cout << "-----\n";
    student.printInfo();
    return 0;
}
