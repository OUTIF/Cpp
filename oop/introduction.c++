#include <iostream>
#include <list>
using namespace std;


class Youtubechannel{
public:
    string name;
    string ownername;
    int subscribercount;
    list<string> videoes;
};


int main(){
    Youtubechannel outif;
    outif.name="Outify";
    outif.ownername="Yusuf";
    outif.subscribercount=489237;
    outif.videoes={"the first video in the channel","hello world video","c++"};

    cout<<"the name of the channel is :"<<outif.name<<endl;
    cout<<"the name of the owner is :"<<outif.ownername<<endl;
    cout<<"the number of the Subscribers in the channel is: :"<<outif.subscribercount<<endl;
    cout<<"The list of the published videos in the channel"<<endl;
    for(string videosTitle:outif.videoes)cout<<videosTitle<<endl;
    
    return 0;
}
