#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        int n1,n2,n3;
        cin>>n1>>n2>>n3;

        if(((n1==1 || n2==1) && n3==1) || ((n2==1 || n3==1) && n1==1) ){
            sum+=1;
        }
        
        /*
        if(a+b==2 || b+c==2 || a+c==2){
            sum+=1;
        }    
        */
    }
    cout<<sum<<endl;
    
}