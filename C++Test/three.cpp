#include <iostream>
#include <string>

class Patient {
public:
    std::string pat_name;
    int age;
    char sex;

    Patient(std::string name, int age, char sex) : pat_name(name), age(age), sex(sex) {}
};

class IPD {
public:
    int ward_no;
    int bed_no;
    double cpd;

    IPD(int ward_no, int bed_no, double cpd) : ward_no(ward_no), bed_no(bed_no), cpd(cpd) {}
};

class IPD_Patient : public Patient, public IPD {
public:
    int da;

    IPD_Patient(std::string name, int age, char sex, int ward_no, int bed_no, double cpd, int da)
        : Patient(name, age, sex), IPD(ward_no, bed_no, cpd), da(da) {}
};

int main() {

    std::string name;
    int age;
    char sex;
    int ward_no;
    int bed_no;
    double cpd;
    int da;
    
    std::cout << "Enter patient name: ";
    std::cin >> name;
    std::cout << "Enter patient age: ";
    std::cin >> age;
    std::cout << "Enter patient sex (M/F): ";
    std::cin >> sex;
    std::cout << "Enter ward number: ";
    std::cin >> ward_no;
    std::cout << "Enter bed number: ";
    std::cin >> bed_no;
    std::cout << "Enter charge per day: ";
    std::cin >> cpd;
    std::cout << "Enter number of days admitted: ";
    std::cin >> da;


    IPD_Patient patient(name, age, sex, ward_no, bed_no, cpd, da);

    std::cout << "-------------------------------" << std::endl;
    std::cout << "Displaying Patient Details:" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "Patient Name: " << patient.pat_name << std::endl;
    std::cout << "Age: " << patient.age << std::endl;
    std::cout << "Sex: " << patient.sex << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "Displaying IPD Details:" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "Ward No: " << patient.ward_no << std::endl;
    std::cout << "Bed No: " << patient.bed_no << std::endl;
    std::cout << "Charge Per Day: " << patient.cpd << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "No of Days Admitted: " << patient.da << std::endl;

    return 0;
}
