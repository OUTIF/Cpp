#include<iostream>
#include<string>

using namespace std;

int main(){

    string text;
    int spaces=1;
    cout<<"please enter a string: ";
    getline(cin,text);

    for(int i=0;i<text.length();i++){
        if(i==0)text.at(0)=toupper(text.at(0));

        if(text.at(i)==' '){
            text.at(i+1)=toupper(text.at(i+1));
            spaces++;
        }
    }


    cout<<text<<endl;
    cout<<"Total number of words: "<<spaces;
    

    return 0;
}
