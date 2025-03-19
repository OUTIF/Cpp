#include <iostream>
#include <string>

using namespace std;

enum Days {
    Sunday = 1,   
    Monday,       
    Wednesday,    
    Thursday,     
    Friday,       
    Saturday      
};

// Function to convert enum to string
string getDayName(Days day) {
    switch (day) {
        case Sunday:    return "Sunday";
        case Monday:    return "Monday";
        case Wednesday: return "Wednesday";
        case Thursday:  return "Thursday";
        case Friday:    return "Friday";
        case Saturday:  return "Saturday";
        default:       return "Unknown";
    }
}

struct student {
    int age;
    float gpa;
    string name;
    string dayofbirth;
};

int main() {
    Days myday = Sunday; 

    student s1;
    s1.name = "Yusuf Hussein";
    s1.age = 20;
    s1.dayofbirth = getDayName(myday); 
    s1.gpa = 1.88;

    cout << "Student Name: " << s1.name << "\n"
         << "Student Age: " << s1.age << "\n"
         << "Student GPA: " << s1.gpa << "\n"
         << "Student Birthday: " << s1.dayofbirth << endl;

    return 0;
}
