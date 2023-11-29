#include<iostream>
using namespace std;

int main(){

    long long n, temp, sum=0;
    cin>> n;

    for(int i = 1; i <n; i++)
    {   
       cin>>temp;
       sum+=temp;
    }

    cout<< ((n * (n +1))/2) - sum;    
}