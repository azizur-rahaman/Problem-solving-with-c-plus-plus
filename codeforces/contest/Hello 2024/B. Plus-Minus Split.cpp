#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n, positiveTotal=0,negetiveTotal=0;

        cin>>n;

        while (n--)
        {
            char cc;
            cin>>cc;

            if(cc=='+') positiveTotal++;
            else negetiveTotal++;
        }
        
        cout<<abs(positiveTotal-negetiveTotal)<<endl;
    }
    
}