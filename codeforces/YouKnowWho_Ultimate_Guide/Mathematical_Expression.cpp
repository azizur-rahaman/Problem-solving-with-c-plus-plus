#include<iostream>
#include <string>

using namespace std;

int main(){
    int a,b,sum;
    char ch;

    cin>>a;
    cin.ignore();
    cin>>ch;
    cin>>b;
    cin.ignore();
    cin.ignore();
    cin.ignore();
    cin>>sum;

    if(ch == '+'){
        if(a+b == sum)
            cout<<"Yes"<<endl;
        else cout<< a+b<<endl;

    }else if(ch == '-'){
        if(a-b == sum)
            cout<<"Yes"<<endl;
        else cout<<a-b<<endl;
    }else if(ch == '/'){
        if(a/b == sum)
            cout<<"Yes"<<endl;
        else cout<<a/b<<endl;
    }else if(ch == '*'){
        if(a*b == sum)
            cout<<"Yes"<<endl;
        else cout<<a*b<<endl;
    }

}