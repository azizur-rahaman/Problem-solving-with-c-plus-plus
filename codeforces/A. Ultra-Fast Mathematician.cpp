#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1,str2,result="";
    cin>>str1>>str2;

    for (int i = 0; i < str1.size(); i++)
    {
        if(str1[i]!=str2[i]){
            result+='1';
        }else{
            result+='0';
        }
    }
    cout<<result<<endl;
}