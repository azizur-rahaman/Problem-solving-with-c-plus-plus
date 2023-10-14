#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n,m;
    cin>>n>>m;

    int result= n/2;


    if(n/m>0){
        if(result % m == 0 && n%2==0){
            cout<<result<<endl;
        }else{
            while (true)
            {
                if((result+1) % m ==0){
                    cout<<result+1<<endl;
                    break;
                }else{
                    if((result+2) % m == 0){
                        cout<<result+2<<endl;
                        break;
                    }else{
                        result+=2;
                    }
                }
            }
            
        }
    }else cout<<"-1"<<endl;

    

}