#include<iostream>
#include<cmath>
using namespace std;


// with function
bool isPrime(int i){
    for (int j = 2; j <= sqrt(i); j++)
    {
        if(i%j==0){
            return false;
        }
    }
    return true;
    
}
int main(){
int a,b;
    cin>>a>>b;

    for (int i = a; i < b; i++)
    {
       if(isPrime(i)){
        cout<<""<<i<<endl;
       }
    }
    
}



// int main(){
//     int n;
//     cin>>n;

//     for (int i = 2; i < sqrt(n); i++)
//     {
//        if(n%i==0){
//         cout<<"Not Prime number";
//        }else{
//         cout<<"Prime Number";
//        }
//     }
    
// }