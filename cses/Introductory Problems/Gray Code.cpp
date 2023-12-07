#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string str(n,'0');
    string str1s(n,'1');


    cout<<str<<endl;

    while (str!=str1s)
    {
        for (int i = n-1; i >= 0; i--) {
            if((str[i]=='0' && i==0) || str[i-1]=='1'){ 
                str[i]='1'; 
                cout<<str<<endl;
                break;
            }else {
                string temp=str;
                temp[i]='1';
                cout<<temp<<endl;
            }
            
        }

    }



    
}