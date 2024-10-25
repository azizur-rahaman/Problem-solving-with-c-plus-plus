#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;

    int storage=0 ;
    int originalN = n;
    
    while (n>0)
    {
        int testnum = n%10;

        storage+=pow(testnum, 3);

        n=n/10;
    }

    if(storage==originalN){
        cout<<"Armstrong"<<endl;
    }else{
        cout<<"Not Armstrong"<<endl;
    }
    
    
}