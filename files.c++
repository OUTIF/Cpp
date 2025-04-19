#include <iostream>
#include <fstream>
#include <string>
#include <array>

using namespace std;

int main(){

    fstream myfile;
    myfile.open("text.txt",ios::out); // write (output to the wanted file) //
    if(myfile.is_open()){
        myfile <<"Hello this first line\n";
        myfile.close();
    } 

    myfile.open("text.txt",ios::app); // append to the wanted file. //
    if(myfile.is_open()){
        myfile <<"Hello this second line\n";
        myfile.close();
    } 


    myfile.open("text.txt",ios::in);  // read from the file. // 
    if(myfile.is_open()){
        string line;
        while(getline(myfile,line)){
            cout<<line<<endl;
        }
        myfile.close();
    }

    return 0;
}
