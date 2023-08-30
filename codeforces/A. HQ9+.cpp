#include<bits/stdc++.h>
using namespace std;

int main(){
    string str,result="";
    cin>>str;

        int len = str.length();
        if((str.find('H')<len) || (str.find('Q')<len)|| (str.find('9')<len)){
            
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
}