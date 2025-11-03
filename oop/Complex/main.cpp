#include <iostream>
#include "Complexx.h"


using namespace std;


int main()
{
	complex a1(0.5,0.5), result;
	complex a2(1.2, 2.5);

	result = a1 + a2;
	result.display();
	cout << endl;

	//get the image of the a1 complex '0.5'.
	cout<<"Image " << a1.getimg();

	return 0;
}
