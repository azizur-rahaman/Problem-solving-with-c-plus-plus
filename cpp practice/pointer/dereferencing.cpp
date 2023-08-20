#include<bits/stdc++.h>
using namespace std;

int main(){
    string food = "Pizza";
    string* ptr = &food;

    //! Reference: output the addresss
    cout<<ptr<<endl;

    //!Dereferencing: 
    cout<<*ptr<<endl;
}