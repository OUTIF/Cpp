#include <iostream>
#include <string>
#include <array>


using namespace std;

#define size 3 
 
struct product{

    string name;
    int quantity;
    float price;

};


int main(){

    array<product,size>products_array;
    int expensive_index,cheap_index;
    float total_price=0;
 

    cout<<endl<<"Please enter the information of the products on by one"<<endl;

    for(int i=0;i<size;i++){

        cout<<"----------------------------"<<endl;

        cout<<"Enter the name of product #"<<i+1<<":";
        cin>>products_array.at(i).name;

        cout<<"Enter the quantity of product #"<<i+1<<":";
        cin>>products_array.at(i).quantity;
        
        cout<<"Enter the price of a unit product #"<<i+1<<":";
        cin>>products_array.at(i).price;

        total_price+=(products_array.at(i).quantity*products_array.at(i).price);
        
        if(i==0){
            cheap_index=i;
            expensive_index=i;
        }
        if(i!=0){
            if(products_array.at(i).price<products_array.at(cheap_index).price) cheap_index=i;
            if(products_array.at(i).price>products_array.at(expensive_index).price) expensive_index=i;
        }
    }

    cout<<"----------------------------"<<endl;
    cout<<"The cheapest product:"<<products_array.at(cheap_index).name<<endl;
    cout<<"The most expensive product:"<<products_array.at(expensive_index).name<<endl;
    cout<<"The total value:"<<total_price;
    



    return 0;
}
