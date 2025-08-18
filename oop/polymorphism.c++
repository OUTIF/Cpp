#include <iostream>
#include <list>
using namespace std;


/*
-Use protected if you want derived classes to access a member, but don’t want it accessible from outside the class.
-Use public if you want everyone to access it.
-Use private if only the base class should access it.
*/



class YoutubeChannel{                           //Base class 
private:                                        //encapsulation 
    string nameOFchannel;
    int SubscriberCount;
    list<string> videoesTitles;
protected:
    string ownername;
    int contenquality;
public:
    YoutubeChannel(string name,string owner ){                      
        nameOFchannel=name;
        ownername=owner;
        SubscriberCount=0;
        contenquality=0;
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
    void channelAnalyse(){
        if(contenquality<3){
            cout<<"the quality of the channel is poor"<<endl; }
        else{
            cout<<"the quality of the channel is good"<<endl; }
    }
    

};

class CookingYoutubeChannel:public YoutubeChannel{              //inheritanced class  (derived class)
public: 
    CookingYoutubeChannel(string name,string ownername)         // constructor of derived class (it must call the base class constructor)
        :YoutubeChannel(name,ownername) {}

    void practicing(){
        cout<<ownername<<" is practicing making food \n"<<endl; 
        contenquality++;

       }
};

class singersYoutubeChannel:public YoutubeChannel{              //inheritanced class  (derived class)
public: 
    singersYoutubeChannel(string name,string ownername)         // constructor of derived class (it must call the base class constructor)
        :YoutubeChannel(name,ownername) {}

    void practicing(){
        cout<<ownername<<" is practicing singin songs \n"<<endl; 
        contenquality++;
       }
};

int main(){

    CookingYoutubeChannel cooking_channel("Iraqi food","wasan");  
    singersYoutubeChannel singing_channel("Iraqi songs","zaidon");  

    cooking_channel.practicing();
    singing_channel.practicing();
    singing_channel.practicing();
    singing_channel.practicing();
    singing_channel.practicing();
    singing_channel.practicing();
    singing_channel.practicing();
    
    YoutubeChannel *cookptr=&cooking_channel;       //this part demonstrates polymorphism:
    YoutubeChannel *singptr=&singing_channel;

    cookptr->channelAnalyse();
    singptr->channelAnalyse();
    
    return 0;
}
