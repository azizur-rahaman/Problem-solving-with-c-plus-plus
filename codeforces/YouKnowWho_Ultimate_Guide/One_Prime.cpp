#include<iostream>
#include <string>
#include<cmath>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n < 2){
        cout<<"NO"<<endl;
        return 0;
    }

    bool flag = true;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0){
            flag = false;
            break;
        }
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    

}