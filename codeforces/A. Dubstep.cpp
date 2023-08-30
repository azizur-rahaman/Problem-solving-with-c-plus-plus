#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    int i=0;
    while (i<str.length())
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B'){
            str.erase(i,3);
            if(i!=0 && str[i-1] != ' '){
                str.insert(i, " ");
            }
        }else{
            i++;
        }
    }
    cout<<str<<endl;
    
}