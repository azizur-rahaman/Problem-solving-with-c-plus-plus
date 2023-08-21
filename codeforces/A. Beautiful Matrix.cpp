#include<bits/stdc++.h>
using namespace std;

int main(){

    int r,c;
    int totalSwap = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {   
            int temp;
            cin>>temp;
            if(temp==1){
                r=i;
                c=j;
            }
        }
        
    }
    
    //! use abs()
    
    if(r<2){
        totalSwap=2-r;
    }else if(r>2){
        totalSwap=r-2;
    }

    if(c<2){
        totalSwap+=2-c;
    }else if(c>2){
        totalSwap+= c-2;
    }

    cout<<totalSwap<<endl;

}