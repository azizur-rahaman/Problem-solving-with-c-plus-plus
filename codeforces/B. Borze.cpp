#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str, result="";
    getline(cin,str);
    int len = str.length();

    int i = 0;
    for(int i=0;i<len;i++)

    {
        if(str[i]=='.'){
            result+='0';
        }
        if(str[i]=='-'&&str[i+1]=='.'){
            result+='1';
            ++i;
            
        }
        if(str[i]=='-'&&str[i+1]=='-'){
            result+='2';
            ++i;
        }
        
    } 
    cout<<result<<endl;
    
}