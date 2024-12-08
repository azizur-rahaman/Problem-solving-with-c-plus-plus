#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;



void solve(){
    int n;
    cin>>n;

    map<int,int> mp;

    pair<char, int> maxi;
    pair<char,int> mini = make_pair('a', INT_MAX);
    string ss="";

    for(int i=0; i<n; i++){
        char ch;
        cin>>ch;

        ss+=ch;

        mp[ch]++;

        // if(maxi.first != ch && mp[ch] > maxi.second){
        //     maxi = make_pair(ch,mp[ch]);
        // }else{
        //     maxi.second = mp[ch];
        // }

        if(maxi.second < mp[ch]){
            maxi = make_pair(ch,mp[ch]);
        }

        if(mini.second > mp[ch]){
            mini = make_pair(ch,mp[ch]);
        }

    }

    int flag = 1;

    for(int i=1; i<n; i++){
        if(mp[i] != mp[i-1]){
            flag=0;
            break;
        }
    }

    cout<<flag<<endl;

    if(flag){
        int n=1;
        for(auto p : mp){
            if(n==2){
                ss[0] = p.first;
                break;
            }
            n++;
        }

        cout<<ss<<endl;
        return;
    }
 
     for(int i=0; i<n; i++){
        if(ss[i] == mini.first){
            ss[i] = maxi.first;
            break;
        }
     }


    cout<<ss<<endl;
}

int main(){
    int t;
    cin>>t;

    while(t--) solve();
}