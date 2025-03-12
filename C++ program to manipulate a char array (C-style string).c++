#include <iostream>
using namespace std;

int main(){

    char str[100]="TeSt StRiNg";
    int s=0;
    char temp;

    //loop to Lowercase all the uppercases latters usng ascii table values
    for(int i=0;str[i]!='\0';i++)
    {
        if(int(str[i])<91 &&int(str[i])>64){
            str[i]=char(int(str[i]+32));
        }
    }

    //loop to print the string;
    cout<<"\n\nChanged string: ";
    for(int i=0;str[i]!='\0';i++) cout<<str[i];

    //loop to find out the length of the string
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' ')s++;
    }

    // Loop to reverse the string
    for(int j=0;j<s/2;j++){

        temp=str[j];
        str[j]=str[s-j];
        str[s-j]=temp;
        
    }
    
    //loop to print the reversed string
    cout<<"\nReversed string: ";
    for(int i=0;str[i]!='\0';i++) cout<<str[i];
    cout<<"\n\n";



    return 0;

}
