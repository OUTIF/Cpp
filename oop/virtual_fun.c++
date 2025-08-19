#include <iostream>
#include <list>
using namespace std;

/*A virtual function in a base class allows you to override it in a derived class.
When you call the function through a base class pointer or reference, the most derived 
version (the one in the actual object) is called.*/



class instrument{           // base class
public:
    virtual void MakeSound(){                   //virtual funciton 
        cout<<"instrument sound... \n";
    }
};

class strings:public instrument{    //inheritated class
public:
    void MakeSound(){
        cout<<"string sound... \n";
    }
};

int main(){

    instrument *I1=new strings();
    I1->MakeSound();
    
    return 0;
}
