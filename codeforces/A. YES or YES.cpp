#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    long int n;
    cin>>n;
    string str;
    for (int i = 0; i < n; i++)
    {

        cin>>str;
        transform(str.begin(), str.end(), str.begin(), ::toupper);

        if(str=="YES") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    


}