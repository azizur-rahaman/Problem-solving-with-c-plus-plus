#include<bits/stdc++.h>
using namespace std;

int main(){
    string ss;
    getline(cin,ss);

    unordered_map<char,int> freq_map;

    for (auto& s : ss)
    {
        freq_map[s]+=1;
    }
    
    int odd_counter=0;
    for (auto& s : freq_map)
    {
        if(s.second % 2 == 1) odd_counter+=1;
    }
    
    string result="";
    if(odd_counter>1) cout<<"NO SOLUTION"<<endl;
    else {

        for (auto& p : freq_map)
        {
            if(p.second % 2 == 1) {
                for (int i = 0; i < p.second; i++) result+=p.first;
                freq_map.erase(p.first);
                break;
            }      

        }

        for (auto& p : freq_map)
        {
            string str(p.second/2, p.first);
            result= str+result+str;
        }
        
    }

    if(result.length()>=1) cout<<result;
}