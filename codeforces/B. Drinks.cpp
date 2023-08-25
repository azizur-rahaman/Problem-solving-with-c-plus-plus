#include<bits/stdc++.h>
using namespace std;

int main(){
    long double n,sum=0;
    cin>>n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {   
        int temp;
        cin>>temp;
        sum+=temp;
    }
    cout<<fixed<<setprecision(12)<<((sum/(n*100))*100)<<endl;
}