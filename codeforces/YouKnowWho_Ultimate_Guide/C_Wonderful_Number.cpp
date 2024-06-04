#include<bits/stdc++.h>
using namespace std;


void solved(){
  int n;
  cin>>n;

   if(n % 2 == 0){
    cout<<"NO"<<endl;
    return;
   }

   bitset<32> bits(n);
   
   vector<int> arr;

   for (int i = 0; i < 32; i++)
        arr.push_back(bits.test(i));
    
    int i=0;

    while(i = arr.size() - 1){
        if(arr[i] == 1){
            break;
        }

        arr.pop_back();
    }
        
    bool flag = true;
    int len = arr.size();

    for(int i=0; i < len/2; i++)
        if(arr[i] != arr[len-i-1]){
            flag = false;
            break;
        }
   
   if(flag) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

}

int main(){

    int t=1;
    // cin>>t;

    while (t--) solved();

}