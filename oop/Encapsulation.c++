#include <iostream>
#include <list>
using namespace std;


class YoutubeChannel{
private:                                        //encapsulation 
    string nameOFchannel;
    string ownername;
    int SubscriberCount;
    list<string> videoesTitles;
public:
    YoutubeChannel(string name,string owner ){                      
        nameOFchannel=name;
        ownername=owner;
        SubscriberCount=0;
    }
    void GetInfo(){                                                  
        cout<<"The channel name:"<<nameOFchannel<<endl;
        cout<<"The owner :"<<ownername<<endl;
        cout<<"Number of subscribers:"<<SubscriberCount<<endl;
        cout<<"Published videos:"<<endl;
        for(string Title:videoesTitles)cout<<Title<<"\n";
        cout<<"\n";
    }

    void subscribe(){SubscriberCount++;}
    void unsubscribe(){if(SubscriberCount>0){SubscriberCount--;}}
    void publishVideo(string Title){videoesTitles.push_back(Title);}

};


int main(){

    YoutubeChannel channel("Outif","Yusuf");                       
    channel.GetInfo();               
    channel.subscribe();                              
    channel.subscribe();                              
    channel.subscribe();                              
    channel.unsubscribe();
    channel.publishVideo("java video");                              
    channel.publishVideo("c++ video");                              
    channel.publishVideo("python video");     
    channel.GetInfo();                         

    
    return 0;
}
