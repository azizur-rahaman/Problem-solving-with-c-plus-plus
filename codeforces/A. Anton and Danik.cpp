#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,countA=0,countD=0;
    cin>>n;

    string n_str;
    cin>>n_str;

    for (int i = 0; i < n; i++)
    {
        if(n_str[i]=='A'){
            countA++;
        }else{
            countD++;
        }
    }

    if(countA>countD){
        cout<<"Anton"<<endl;
    }else if(countD>countA){
        cout<<"Danik"<<endl;
    }else{
        cout<<"Friendship"<<endl;
    }

}