#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int devu_song_list, duration_of_event;
    cin>>devu_song_list>>duration_of_event;

    int temp=0,result = 0;

    while (devu_song_list--)
    {   

        int time;
        cin>>time;

        if(devu_song_list>0) temp+=time+10;
        else temp+=time;

        if(temp>duration_of_event) {
            cout<<"-1"<<endl;
            break;
        };

        if(devu_song_list>0){
            if(temp>duration_of_event){
                cout<<"-1";
                break;
            }else{
                result+=2;
            }
        }else{
            result+= (duration_of_event-temp)/5;
        }
    }
    
    if(devu_song_list<0) cout<<result<<endl;
    
}