#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    string result = "NO";
    cin>>str;
    int count1=0;
    int count0=0;
    
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]=='1'){
            count0=0;
            count1++;
            if(count1>=7){
                result="YES";
                break;
            }
        }else{
            count1=0;
            count0++;
            if(count0>=7){
                result="YES";
                break;
            }
        }
    }

    cout<<result<<endl;
    
}