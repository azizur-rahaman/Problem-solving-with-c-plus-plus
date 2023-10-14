#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    string str;
    cin>>str;
    
    if(str[0]!='-') cout<<str<<flush;
    else if(str[str.size()-1] > str[str.size()-2]) {
        str.pop_back();
        cout<<str<<flush<<endl;
    }else{

        str.erase(str.length()-2, 1);

        if(str[1]=='0') cout<<"0"<<flush;
        else cout<<str<<flush;
    }
    
}