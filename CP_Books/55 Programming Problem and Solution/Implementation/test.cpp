#include<iostream>
using namespace std;

int main(){
    char s;
    string ss = "";

    while(scanf("%c", &s) != EOF){
        ss += s;
    }

    cout<<ss<<endl;

    float a, b;

    if(abs(a-b) < 1e-9){
        cout<<"YES"<<endl;
    }
}