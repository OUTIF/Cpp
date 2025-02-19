#include <iostream>
#include <array>
using namespace std;

#define row 3
#define column 5

int main(){

    int score=0;
    int answers[row]={5,17,31};
    int player_answers[row];


    int game[row][column]={
        {1,1,2,3,5},
        {2,3,5,9,17},
        {1,3,7,15,31}
    };

    
    for(int i=0;i<row;i++){
        cout<<"The game number:"<<i+1<<endl;
        for(int j=0;j<column-1;j++){
            cout<<game[i][j]<<" ";
        }
        cout<<"X"<<"\n"<<"Please enter your answer for X: ";
        cin>>player_answers[i];
        
    }

    for(int index=0;index<row;index++) (player_answers[index]==answers[index])?score++:score+=0;
    cout<<"Your final score is :"<<score;


    return 0;

}
