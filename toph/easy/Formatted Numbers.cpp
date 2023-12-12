#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string ss = to_string(n);
    int len = ss.length();
    int temlen;


    if(len % 3 != 0){
        temlen = len%3;
        
        for (int i = 0; i < temlen; i++)
        {
            cout<<ss[i];
        }
        cout<<",";
    
        for (int i = temlen; i < len/3+temlen+1; i++)
        {
            cout<<ss[i];
        }
        temlen = temlen + 1 + (len/3);
        cout<<",";


        for (int i = temlen; i < (len/3)+temlen + 1; i++)
        {
            cout<<ss[i];
        }
        cout<<endl;      
        
    }else {
        
 
        for (int i = 0; i < len; i++)
        {
            if(i == (len/3)-1) cout<<",";
            cout<<ss[i];
        }

    }


}