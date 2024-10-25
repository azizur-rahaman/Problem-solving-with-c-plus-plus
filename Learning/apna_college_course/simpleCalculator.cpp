#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"A: ";
    cin>>a;
    cout<<"B: ";
    cin>>b;
    string getOperator;

    printf("Enter your Operator -> +,-,/,*\n");
    cout<<"Operator: ";
    cin>>getOperator;

    switch (getOperator[0])
    {
    case '+':
        cout<<(a+b)<<endl;
        break;
    case '-':
        cout<<(a-b)<<endl;
        break;
    case '/':
        cout<<(a/b)<<endl;
        break;
    case '*':
        cout<<(a*b)<<endl;
        break;
    }
}