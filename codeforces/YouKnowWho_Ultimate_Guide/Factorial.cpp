#include<iostream>
#include <string>
#include<cmath>
using namespace std;


unsigned long long int factorial(unsigned long long int n){
    if(n == 0 || n == 1){
        return 1;
    }

    return n * factorial(n-1);
}


void solved(){
   unsigned long long int n;
    cin>>n;
    cout<<factorial(n)<<endl;
}

int main(){

    int t;
    cin>>t;

    while (t--) solved();

}