#include <iostream>
#include <string.h>
#include <array>

using namespace std;

int main(){
  
    int size;
  
    array<string,3>names= {"Ahmed", "Osama", "Ameer"};
  
        for(int i=0;i<names.size();i++){
            cout<<"========="<<endl<<"= "<<names[i]<<" ="<<endl<<"=================="<<endl<<"== ";
          
            for(int j=0;j<names[i].size();j++){
            cout<<names[i].at(j);  
              
            if(j!=(names[i].size()-1))cout<<", ";  
            }
          
            cout<<" ="<<endl<<"=================="<<endl;
    }

    return 0;

}
