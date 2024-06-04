#include<iostream>
#include <string>
#include<bitset>

using namespace std;




void solved(){
  int n;
  cin>>n;

  bitset<32> binary(n);
  
  int cntOne = binary.count();
  
  string bitstring="";

  while (cntOne--)
  {
    bitstring.push_back('1');
  }
  
  bitset<32> bits(bitstring);

  cout<< bits.to_ulong()<<endl;
  
}

int main(){

    int t;
    cin>>t;

    while (t--) solved();

}