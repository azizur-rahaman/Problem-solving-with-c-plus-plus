#include<bits/stdc++.h>
using namespace std;

int main(){
    string input;
    cin>>input;

   if(islower(input[0])){
    input[0]=toupper(input[0]);
   }
   cout<<input<<endl;
}