#include<iostream>
#include<string>

class RailwayTicket {
    std::string name;
    std::string coach;
    long mobno;
    int amt;
    int tamt;

public:
    void accept() {
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter coach: \n- FirstAC[1]\n- SecondAC[2]\n- ThirdAC[3]\n- Sleeper[S]\n";
        std::cin >> coach;
        std::cout << "Enter mobile number: ";
        std::cin >> mobno;
        std::cout << "Enter amount: ";
        std::cin >> amt;
    }

    void update() {
        if(coach == "1") {
            tamt = amt + 700;
        } else if(coach == "2") {
            tamt = amt + 500;
        } else if(coach == "3") {
            tamt = amt + 250;
        } else if(coach == "S" || coach == "s") {
            tamt = amt;
        }
    }

    void display() {
        if(coach == "1") {
            coach = "FirstAC";
        } else if(coach == "2") {
            coach = "SecondAC";
        } else if(coach == "3") {
            coach = "ThirdAC";
        } else if(coach == "S" || coach == "s") {
            coach = "Sleeper";
        }
        std::cout << "Name: " << name << std::endl;
        std::cout << "Coach: " << coach << std::endl;
        std::cout << "Mobile Number: " << mobno << std::endl;
        std::cout << "Total Amount: " << tamt << std::endl;
    }
};

int main() {
    RailwayTicket ticket;
    ticket.accept();
    ticket.update();
    ticket.display();

    return 0;
}