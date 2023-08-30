#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string str;
    cin>>str;
    int counterU=0;
    int counterL=0;
    for (int i = 0; i < str.length(); i++)
    {
        if(islower(str[i])) counterL++;
        else counterU++;
    }

    if(counterU==str.size()){
            transform(str.begin(), str.end(), str.begin(), ::towlower);
            cout<<str<<endl;
    }else if(counterL>1){
        cout<<str<<endl;
    }else if(islower(str[0])){

        transform(str.begin(), str.end(), str.begin(), ::tolower);
        str[0]= toupper(str[0]);
        cout<<str<<endl;
    }else {
        cout<<str<<endl;
    }


   
}