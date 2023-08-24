#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,counter=0;
  cin>>n;
  cin.ignore();

  for (int i = 0; i < n; i++)
  {
    int p,q;
    cin>>p>>q;
    if((q-p)>1){
        counter++;
    }
  }
  cout<<counter<<endl;
}