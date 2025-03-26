#include <iostream>
#include <string>

using namespace std;


enum cities {
    antalya = 7,
    adana = 1,
    paris = 6,
    baghdad= 9
}; 


string getcity(cities c) {
    switch (c) {
        case antalya:
            return "Antalya";
        case paris:
            return "paris";
        case adana:
            return "Adana";
         case baghdad:
            return "Baghdad";
        default:
            return "No city input";
    }
}

struct student {
    string name;
    cities city;
    int number;
};


void structprinter(student s) { 
    cout << "Student Info:\n";
    cout << "Name: " << s.name << endl;
    cout << "City: " << getcity(s.city) << endl; 
    cout << "Student ID: 0"<<static_cast<int>(s.city) <<" "<< s.number << endl; 
}

int main() {

    student yusuf;
    yusuf.name = "Yusuf";
    yusuf.city = baghdad; 
    yusuf.number = 927421;

    
    structprinter(yusuf);

    return 0;
}
