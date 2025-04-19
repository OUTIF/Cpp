#include <iostream>
#include <fstream>
#include <string>
#include <array>

using namespace std;

void f_read(string path_of_folder);
void f_write(string path_of_folder,string line);
void f_append(string path_of_folder,string line);

int main(){
    
    f_write("text.txt","4.8 3.1 0");
    f_append("text.txt","6.2 2.8 2");
    f_read("text.txt");

    return 0;
}


void f_write(string path_of_folder,string line){

    fstream myfile;
    myfile.open(path_of_folder,ios::out);  //write//
    if(myfile.is_open()){
        myfile <<line<<endl;
        myfile.close();
    }

}
void f_read(string path_of_folder){

    fstream myfile;
    myfile.open(path_of_folder,ios::in);  // read from the file. // 
    if(myfile.is_open()){
        string line;
        while(getline(myfile,line)){
            cout<<line<<endl;
        }
        myfile.close();
    }

}

void f_append(string path_of_folder,string line){

    fstream myfile;
    myfile.open(path_of_folder,ios::app);  //append//
    if(myfile.is_open()){
        myfile <<line<<endl;
        myfile.close();
    }
}
