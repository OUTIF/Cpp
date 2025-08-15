#include <iostream>
#include <list>
using namespace std;




class YoutubeChannel{
public:
    string nameOFchannel;
    string ownername;
    int SubscriberCount;
    list<string> videoesTitles;

    YoutubeChannel(string name,string owner ){                       //Constructors
        nameOFchannel=name;
        ownername=owner;
        SubscriberCount=0;
    }

    void GetInfo(){                                                  // Method
        cout<<"The channel name:"<<nameOFchannel<<endl;
        cout<<"The owner :"<<ownername<<endl;
        cout<<"Number of subscribers:"<<SubscriberCount<<endl;
        cout<<"Published videos:"<<endl;
        for(string Title:videoesTitles)cout<<Title<<endl;
    }

};


int main(){

    YoutubeChannel channel("Outif","Yusuf");                        // creating or defining the channel.
    channel.videoesTitles.push_back("hello world video");
    channel.GetInfo();                                              //printing the information of the channel.

    
    return 0;
}
