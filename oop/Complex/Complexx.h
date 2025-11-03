
class complex {
private:
	double Re;
	double Im;
public:

	complex(double = 0.0, double = 0.0);
	
	double getreal()const ;
	double getimg()const ;

	void setreal(double);
	void setimg (double);


	complex operator+(const complex& other)const ;
	complex operator-(const complex& other)const ;
	complex operator*(const complex& other)const ;
	complex operator/(const complex& other)const ;

	void display()const;

};
