#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    int arr[3];
    while (t--)
    {
        int temp;
        cin>>temp;

        if(temp<=300) cout<<"3000"<<endl;
        else {
            cout<< temp*10<<endl;
        }
    }
    
}