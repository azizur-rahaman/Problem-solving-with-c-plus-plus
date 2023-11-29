#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
    int t, ram=0,counter=1, max_result=0;
    cin>>t;
    
   
   for (int i = 0; i < t; i++)
   {    
        int temp;
        cin>>temp;
 
        if(ram == temp) counter++;
        else counter=1;
        ram=temp;
        max_result = max(max_result, counter);
   }
   

    cout<<max_result<<endl;
    
}