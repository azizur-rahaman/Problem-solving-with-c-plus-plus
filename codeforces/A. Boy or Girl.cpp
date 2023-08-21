#include<bits/stdc++.h>
using namespace std;

int main(){
    string user_input;
    string result = "";
    cin>>user_input;
    for (char ch: user_input)
    {
      if(result.find(ch)==string::npos){
        result+=ch;
      }
        
    }

    if(result.length()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
    
}