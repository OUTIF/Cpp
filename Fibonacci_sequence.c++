#include <iostream>

using namespace std;


#define _mic_FIB(n){\
    int a=0,b=1,c;\
    cout<<"0 1 ";\
    for(int i=0;i<n-2;i++){\
        c=a+b;\
        cout<<c<<" ";\
        a=b;\
        b=c;\
    }\
}

#define ismicro _mic_FIB
#define isfunction _function_FIB // YOU CAN COMMENT THIS LINE OR THE LINE ABOVE TO TEST THE #ifdef in the main function. 

int _function_FIB(int num);

int main(){
    
    int number_of_sequences=8;
    // Using macro for iterative Fibonacci sequence
    #ifdef ismicro
    _mic_FIB(number_of_sequences);

#endif

    // Using macro for recursive Fibonacci sequence
#ifdef isfunction
    cout<<endl;
    for (int i = 0; i < number_of_sequences; i++)
        cout << _function_FIB(i) << " ";
#endif

    return 0;
}

int _function_FIB(int num){
    if(num<=0)return 0;
    if(num==1)return 1;
    
    return _function_FIB(num-1)+_function_FIB(num-2);
}
