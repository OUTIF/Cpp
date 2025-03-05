#include <iostream>
using namespace std;


int sum_digits(int n);


int main(){

    int number=0;

    do{
        cout<<"please enter a positive number to sum its digits:";
        cin>>number;
        cout<<sum_digits(number)<<endl;
    }while(number>=0);
    return 0;
}

int sum_digits(int n){
    if(n>0) return n % 10 + sum_digits(n / 10);
    else return 0;

}
