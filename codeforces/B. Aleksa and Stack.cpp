#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    
    int t;
    cin>>t;

    while (t--)
    {
        int x;
        cin>>x;

        unsigned long long y=6,z=8;
        cout<<y<<" "<<z;
        x-=2;
        while (x--)
        {
            int temp,i=1;
           while (true)
           {
                temp = (z+i)*3;

                if(temp%(y+z)!=0) {
                    temp/=3;
                    cout<<" "<<temp;
                    y=z;
                    z=temp;
                    break;
                }
                i++;
           }
           
        }
        cout<<endl;
        
    }
    
}