#include<bits/stdc++.h>
using namespace std;

#define ll
int main(){
    string stt;
    cin>>stt;

    int totalZero=0, totalOne=0;
    bool isZero = true;
    bool result = false;

    for (char c : stt)
    {
    if(c == '0')  {
        if(isZero == false) {
            isZero=true;
            totalZero=0;
        }
        totalZero++;
        if(totalZero>=7) result=true;

    }
    else{
        if(isZero == true) {
            isZero=false;
            totalOne=0;
        }
         totalOne++;
        if(totalOne>=7) result=true;
    }
    }

    if(result) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}