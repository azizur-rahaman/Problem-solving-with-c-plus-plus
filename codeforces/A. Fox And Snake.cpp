#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m, temp=1;
    cin>>n>>m;

    for (int i = 1; i <= n; i++)
    {   bool check=false;
        for (int j = 1; j <= m; j++)
        {
            if(i%2!=0) {
                cout<<"#";
            }else if(temp%2!=0 && j==m && check==false){
                cout<<"#";
                temp++;
            }else if(temp%2==0 && j==1){
                cout<<"#";
                check=true;
                temp++;
            }else{
                cout<<".";
            }
        }

        cout<<endl;
        
    }
    
}