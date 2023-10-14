#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;

    string str;
    for (int i = 0; i < n; i++)
    {
        cin>>str;
        string temp="";
        for (int i = 0; i < str.length(); i++)
        {   
            
            temp+=str[i];
            ++i;
            if(i==str.length()-1) temp+=str[i];
        }
        cout<<temp<<endl;
        
    }
    
}
