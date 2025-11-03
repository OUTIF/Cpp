#include <iostream>
#include "Complexx.h"

using namespace std;

complex::complex(double x, double y) :Re(x), Im(y) {}

double complex::getreal()const { return this->Re; }
double complex::getimg()const { return this->Im; }

void complex::setreal(double value) { this->Re = value; }
void complex::setimg(double value) { this->Im = value; }

complex complex::operator+(const complex& other)const { return complex(this->Re + other.Re, this->Im + other.Im); }
complex complex::operator-(const complex& other)const { return complex(this->Re - other.Re, this->Im - other.Im); }
complex complex::operator*(const complex& other)const { 
    
    
    return complex(this->Re * other.Re, this->Im * other.Im); 
}
complex complex::operator/(const complex& other)const { 
    
    return complex(this->Re / other.Re, this->Im / other.Im); 
}

void complex::display() const{
	cout << this->Re << " + " << this->Im << "i";
}

// NOTE: No extra brace here!
