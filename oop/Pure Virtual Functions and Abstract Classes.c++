#include <iostream>
#include <list>
using namespace std;

/*A virtual function in a base class allows you to override it in a derived class.
When you call the function through a base class pointer or reference, the most derived 
version (the one in the actual object) is called.*/



class instrument{           // base class ()
public:
    virtual void MakeSound() = 0;  //pure virtual function (forces all derived class to have their own implimentation of that method).
};

class guitar:public instrument{    //inheritated class
public:
    void MakeSound(){
        cout<<"guitar sound... \n";
    }
};

class piano:public instrument{       //inheritated class
public:
    void MakeSound(){
        cout<<"piano sound... \n";   
    }
};

int main(){

    instrument *I1=new guitar();
    instrument *I2=new piano();


    instrument* instrumentsarr[2]={I1,I2};
    for(int i=0;i<3;i++){
        instrumentsarr[i]->MakeSound();
    }
    
    return 0;
}
