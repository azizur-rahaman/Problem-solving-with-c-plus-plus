#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
 

    for (int i = 1; i <=n; i++)
    {   
        int temp = n*2;
       for (int j = 1; j <=temp; j++)
       {
        if(j<=i || j> (temp-i)){
            cout<<j;
        }else {
            cout<<" ";
        }
       }
       cout<<endl;
       
    }
    
    
    for (int i = 0; i <n; i++)
    {   
        for(int j=1; j<= (n*2); j++){
            if(j>(n-i)&& j<= (n+i)){
                cout<<" ";
            }else{
                cout<<j;
            }
        }
        cout<<endl;
       
    }
    
}