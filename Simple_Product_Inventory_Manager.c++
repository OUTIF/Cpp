#include <iostream>
#include <string>
#include <array>


using namespace std;

#define size 3   // this number of items (it must be > 0).
 

//struct to handle the data of the products.
struct product{

    string name;
    int quantity;
    float price;
};


int main(){

    //this is an array with the size we defined up in line 8 .
    array<product,size>products_array;

    int expensive_index,cheap_index;
    float total_price=0;
 

    //this is while loop to handle the size case is bigger than 0.
    while(size>0){
        cout<<endl<<"Please enter the information of the products on by one"<<endl;

    //this for loop aim is to get the "struct product" information from the user.
    for(int i=0;i<size;i++){

        cout<<"----------------------------"<<endl;

        cout<<"Enter the name of product #"<<i+1<<":";  //name of the product
        cin>>products_array.at(i).name;

        cout<<"Enter the quantity of product #"<<i+1<<":";  //quantity of the product 
        cin>>products_array.at(i).quantity;

        cout<<"Enter the price of a unit product #"<<i+1<<":"; // price of one unit product
        cin>>products_array.at(i).price;

        total_price+=(products_array.at(i).quantity*products_array.at(i).price); //this line of code is to calcuulate and add the price of product to the total price.
        
        // initialize the cheapest and the most expensive product index in case if (size==1).
        if(i==0){
            cheap_index=i;
            expensive_index=i;
        }
        if(i!=0){
            if(products_array.at(i).price<products_array.at(cheap_index).price) cheap_index=i;
            if(products_array.at(i).price>products_array.at(expensive_index).price) expensive_index=i;
        }
    }


    // printing the wanted output to the user (final output).
    cout<<"----------------------------"<<endl;
    cout<<"The cheapest product:"<<products_array.at(cheap_index).name<<endl;
    cout<<"The most expensive product:"<<products_array.at(expensive_index).name<<endl;
    cout<<"The total value:"<<total_price<<endl;
    break;

    }
    if(size<1)cout<<"The size is less than 1 "; // this line of code is to handle the case if size is less or equal to 0.

    return 0;
}
