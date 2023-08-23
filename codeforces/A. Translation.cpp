#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    string reverse = string(s1.rbegin(), s1.rend());
    
    if(reverse==s2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}