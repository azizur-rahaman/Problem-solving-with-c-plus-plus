#include <iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    cin.ignore();
    
    string binary="";
    int counter=0;
    int temp=0;
    bool counterInitialize=false;
    
    //convert n to binary number system
    for (int i=0; n>0; i++) {
        binary += to_string(n%2);
        n=n/2;
    }
    
    
    for (int i=0; i<binary.length(); i++) {
      
      if(binary[i]=='1'){
          if(counterInitialize==false) {
              counter++;
          }else {
              temp++;
          }
      }else{
          if(counter>0 && counterInitialize==false){
               counterInitialize=true;
          }
          if(temp>counter){
              counter=temp;
        }
          
        temp=0;
      }
       if(temp>counter){
              counter=temp;
        }
        
        
    }
    cout<<counter<<endl;
    return 0;
}
