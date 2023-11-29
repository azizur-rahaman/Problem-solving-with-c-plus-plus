#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<map>
using namespace std;

int main(){
    int t;
    cin>>t;
 
    map<int,int> mpp;

   for (int i = 0; i < t; i++)
   {    
        int temp;
        cin>>temp;

        bool flag=false;

        for (auto& pair: mpp)
        {
            if(pair.first==temp){
                flag=true;
                pair.second+=pair.second++;
                break;
            }
        }

        if(flag==false){
            mpp[temp]=1;
        }
        
   }



    


}