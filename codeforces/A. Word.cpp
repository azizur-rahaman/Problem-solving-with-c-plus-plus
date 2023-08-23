#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    int cletter=0;
    int lletter=0;

    for (int i = 0; i < str.length(); i++)
    {
        if(isupper(str[i])){
            cletter++;
        }else{
            lletter++;
        }
    }

    if(cletter>lletter){
        for(char &ch: str){
            ch = toupper(ch);
        }
    }else{
       for (char &ch: str)
       {
        ch= tolower(ch);
       }
       
    }

    cout<<str<<endl;
    
}